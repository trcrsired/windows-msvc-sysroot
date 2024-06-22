#include <fast_io.h>
#include <fast_io_device.h>
#include <string_view>
#include <algorithm>
#include <functional>

using namespace fast_io::io;

int main(int argc, char **argv)
{
	if (argc < 2)
	{
		if (argc == 0)
		{
			return 1;
		}
		perr("Usage:", fast_io::mnp::os_c_str(*argv), " <directory>\n");
		return 1;
	}
	using namespace ::std::string_view_literals;

	constexpr ::std::u8string_view vw(u8R"abc(#include)abc"sv);
	::std::boyer_moore_horspool_searcher searcher(reinterpret_cast<char const *>(vw.data()),
												  reinterpret_cast<char const *>(vw.data()) + vw.size());

	::fast_io::dir_file df(fast_io::mnp::os_c_str(argv[1]));
	::fast_io::out_buf_type obf{::fast_io::out()};

	for (auto ent : recursive(at(df)))
	{
		if (type(ent) != fast_io::file_type::regular)
		{
			continue;
		}
		::fast_io::allocation_file_loader loader({::fast_io::mmap_prot::prot_read,
			::fast_io::mmap_flags::map_shared}, drt(ent), ::fast_io::open_mode::in|::fast_io::open_mode::out);
		auto bg{loader.data()};
		auto ed{loader.data() + loader.size()};
		
		for(auto it{bg};(it=std::search(it, ed, searcher))!=ed;)
		{
			auto startit{it};
			it+=vw.size();
			auto it2{it};
			for(;it2!=ed&&::fast_io::char_category::is_c_space(*it2);++it2);
			if(it2==ed)
			{
				break;
			}
			if(it2==it)
			{
				continue;
			}
			it=it2;
			char8_t ch{static_cast<char8_t>(*it)};
			if(ch==u8'<')
			{
				ch=u8'>';
			}
			else if(ch!=u8'\"')
			{
				continue;
			}
			++it;
			auto rightmatcherit{::std::find(it,ed,ch)};
			if(rightmatcherit==ed)
			{
				break;
			}
			auto alllowerit{it};
			if (alllowerit!=rightmatcherit)
			{
				println(obf,"found in file", ent ,": ",::fast_io::mnp::strvw(startit,rightmatcherit+1));
				for(auto it3{it};it3!=rightmatcherit;++it3)
				{
					*it3=::fast_io::char_category::to_c_lower(*it3);
				}
			}
			it=rightmatcherit;
		}
	}
}
