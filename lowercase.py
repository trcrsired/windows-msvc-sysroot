import os
import re

def lowercase_includes():
    pattern_angle = re.compile(r'^\s*#\s*include\s*<([^>]+)>')
    pattern_quote = re.compile(r'^\s*#\s*include\s*"([^"]+)"')
    
    for root, _, files in os.walk('./include'):
        for file in files:
            # avoid strange idl files
            if file.endswith(('.h', '.c', '.hpp', '.cpp')):
                path = os.path.join(root, file)
                with open(path, 'r', encoding='utf-8') as f:
                    lines = f.readlines()
                new_lines = []
                for line in lines:
                    match = pattern_angle.search(line)
                    if match:
                        start, end = match.span(1)
                        line = line[:start] + match.group(1).lower() + line[end:]
                    else:
                        match = pattern_quote.search(line)
                        if match:
                            start, end = match.span(1)
                            line = line[:start] + match.group(1).lower() + line[end:]
                    new_lines.append(line)
                with open(path, 'w', encoding='utf-8') as f:
                    f.writelines(new_lines)

def lowercase_filenames():
    for root, dirs, files in os.walk('.', topdown=False):
        for name in files:
            lower_name = name.lower()
            if lower_name != name:
                os.rename(os.path.join(root, name), os.path.join(root, lower_name))

        for name in dirs:
            lower_name = name.lower()
            if lower_name != name:
                os.rename(os.path.join(root, name), os.path.join(root, lower_name))

lowercase_filenames()
lowercase_includes()
