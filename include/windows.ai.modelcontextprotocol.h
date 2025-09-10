
#pragma warning( disable: 4049 )  /* more than 64k source lines */

/* verify that the <rpcndr.h> version is high enough to compile this file*/
#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 500
#endif

/* verify that the <rpcsal.h> version is high enough to compile this file*/
#ifndef __REQUIRED_RPCSAL_H_VERSION__
#define __REQUIRED_RPCSAL_H_VERSION__ 100
#endif

#include <rpc.h>
#include <rpcndr.h>

#ifndef __RPCNDR_H_VERSION__
#error this stub requires an updated version of <rpcndr.h>
#endif /* __RPCNDR_H_VERSION__ */

#ifndef COM_NO_WINDOWS_H
#include <windows.h>
#include <ole2.h>
#endif /*COM_NO_WINDOWS_H*/
#ifndef __windows2Eai2Emodelcontextprotocol_h__
#define __windows2Eai2Emodelcontextprotocol_h__
#ifndef __windows2Eai2Emodelcontextprotocol_p_h__
#define __windows2Eai2Emodelcontextprotocol_p_h__


#pragma once

//
// Deprecated attribute support
//

#pragma push_macro("DEPRECATED")
#undef DEPRECATED

#if !defined(DISABLE_WINRT_DEPRECATION)
#if defined(__cplusplus)
#if __cplusplus >= 201402
#define DEPRECATED(x) [[deprecated(x)]]
#define DEPRECATEDENUMERATOR(x) [[deprecated(x)]]
#elif defined(_MSC_VER)
#if _MSC_VER >= 1900
#define DEPRECATED(x) [[deprecated(x)]]
#define DEPRECATEDENUMERATOR(x) [[deprecated(x)]]
#else
#define DEPRECATED(x) __declspec(deprecated(x))
#define DEPRECATEDENUMERATOR(x)
#endif // _MSC_VER >= 1900
#else // Not Standard C++ or MSVC, ignore the construct.
#define DEPRECATED(x)
#define DEPRECATEDENUMERATOR(x)
#endif  // C++ deprecation
#else // C - disable deprecation
#define DEPRECATED(x)
#define DEPRECATEDENUMERATOR(x)
#endif
#else // Deprecation is disabled
#define DEPRECATED(x)
#define DEPRECATEDENUMERATOR(x)
#endif  /* DEPRECATED */

// Disable Deprecation for this header, MIDL verifies that cross-type access is acceptable
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"
#else
#pragma warning(push)
#pragma warning(disable: 4996)
#endif

// Ensure that the setting of the /ns_prefix command line switch is consistent for all headers.
// If you get an error from the compiler indicating "warning C4005: 'CHECK_NS_PREFIX_STATE': macro redefinition", this
// indicates that you have included two different headers with different settings for the /ns_prefix MIDL command line switch
#if !defined(DISABLE_NS_PREFIX_CHECKS)
#define CHECK_NS_PREFIX_STATE "always"
#endif // !defined(DISABLE_NS_PREFIX_CHECKS)


#pragma push_macro("MIDL_CONST_ID")
#undef MIDL_CONST_ID
#define MIDL_CONST_ID const __declspec(selectany)


//  API Contract Inclusion Definitions
#if !defined(SPECIFIC_API_CONTRACT_DEFINITIONS)
#if !defined(WINDOWS_AI_MODELCONTEXTPROTOCOL_MODELCONTEXTPROTOCOLCONTRACT_VERSION)
#define WINDOWS_AI_MODELCONTEXTPROTOCOL_MODELCONTEXTPROTOCOLCONTRACT_VERSION 0x10000
#endif // defined(WINDOWS_AI_MODELCONTEXTPROTOCOL_MODELCONTEXTPROTOCOLCONTRACT_VERSION)

#if !defined(WINDOWS_APPLICATIONMODEL_FULLTRUSTAPPCONTRACT_VERSION)
#define WINDOWS_APPLICATIONMODEL_FULLTRUSTAPPCONTRACT_VERSION 0x20000
#endif // defined(WINDOWS_APPLICATIONMODEL_FULLTRUSTAPPCONTRACT_VERSION)

#if !defined(WINDOWS_APPLICATIONMODEL_STARTUPTASKCONTRACT_VERSION)
#define WINDOWS_APPLICATIONMODEL_STARTUPTASKCONTRACT_VERSION 0x30000
#endif // defined(WINDOWS_APPLICATIONMODEL_STARTUPTASKCONTRACT_VERSION)

#if !defined(WINDOWS_FOUNDATION_FOUNDATIONCONTRACT_VERSION)
#define WINDOWS_FOUNDATION_FOUNDATIONCONTRACT_VERSION 0x40000
#endif // defined(WINDOWS_FOUNDATION_FOUNDATIONCONTRACT_VERSION)

#if !defined(WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION)
#define WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION 0x130000
#endif // defined(WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION)

#endif // defined(SPECIFIC_API_CONTRACT_DEFINITIONS)


// Header files for imported files
#include "inspectable.h"
#include "AsyncInfo.h"
#include "EventToken.h"
#include "windowscontracts.h"
#include "Windows.Foundation.h"
#include "Windows.ApplicationModel.h"
#include "Windows.UI.h"

#if defined(__cplusplus) && !defined(CINTERFACE)
/* Forward Declarations */
#ifndef ____x_ABI_CWindows_CAI_CModelContextProtocol_CIModelContextProtocolClientContext_FWD_DEFINED__
#define ____x_ABI_CWindows_CAI_CModelContextProtocol_CIModelContextProtocolClientContext_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace AI {
            namespace ModelContextProtocol {
                interface IModelContextProtocolClientContext;
            } /* ModelContextProtocol */
        } /* AI */
    } /* Windows */
} /* ABI */
#define __x_ABI_CWindows_CAI_CModelContextProtocol_CIModelContextProtocolClientContext ABI::Windows::AI::ModelContextProtocol::IModelContextProtocolClientContext

#endif // ____x_ABI_CWindows_CAI_CModelContextProtocol_CIModelContextProtocolClientContext_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CAI_CModelContextProtocol_CIModelContextProtocolClientContextFactory_FWD_DEFINED__
#define ____x_ABI_CWindows_CAI_CModelContextProtocol_CIModelContextProtocolClientContextFactory_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace AI {
            namespace ModelContextProtocol {
                interface IModelContextProtocolClientContextFactory;
            } /* ModelContextProtocol */
        } /* AI */
    } /* Windows */
} /* ABI */
#define __x_ABI_CWindows_CAI_CModelContextProtocol_CIModelContextProtocolClientContextFactory ABI::Windows::AI::ModelContextProtocol::IModelContextProtocolClientContextFactory

#endif // ____x_ABI_CWindows_CAI_CModelContextProtocol_CIModelContextProtocolClientContextFactory_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CAI_CModelContextProtocol_CIModelContextProtocolServer_FWD_DEFINED__
#define ____x_ABI_CWindows_CAI_CModelContextProtocol_CIModelContextProtocolServer_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace AI {
            namespace ModelContextProtocol {
                interface IModelContextProtocolServer;
            } /* ModelContextProtocol */
        } /* AI */
    } /* Windows */
} /* ABI */
#define __x_ABI_CWindows_CAI_CModelContextProtocol_CIModelContextProtocolServer ABI::Windows::AI::ModelContextProtocol::IModelContextProtocolServer

#endif // ____x_ABI_CWindows_CAI_CModelContextProtocol_CIModelContextProtocolServer_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CAI_CModelContextProtocol_CIModelContextProtocolServerCatalog_FWD_DEFINED__
#define ____x_ABI_CWindows_CAI_CModelContextProtocol_CIModelContextProtocolServerCatalog_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace AI {
            namespace ModelContextProtocol {
                interface IModelContextProtocolServerCatalog;
            } /* ModelContextProtocol */
        } /* AI */
    } /* Windows */
} /* ABI */
#define __x_ABI_CWindows_CAI_CModelContextProtocol_CIModelContextProtocolServerCatalog ABI::Windows::AI::ModelContextProtocol::IModelContextProtocolServerCatalog

#endif // ____x_ABI_CWindows_CAI_CModelContextProtocol_CIModelContextProtocolServerCatalog_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CAI_CModelContextProtocol_CIModelContextProtocolServerCatalogFactory_FWD_DEFINED__
#define ____x_ABI_CWindows_CAI_CModelContextProtocol_CIModelContextProtocolServerCatalogFactory_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace AI {
            namespace ModelContextProtocol {
                interface IModelContextProtocolServerCatalogFactory;
            } /* ModelContextProtocol */
        } /* AI */
    } /* Windows */
} /* ABI */
#define __x_ABI_CWindows_CAI_CModelContextProtocol_CIModelContextProtocolServerCatalogFactory ABI::Windows::AI::ModelContextProtocol::IModelContextProtocolServerCatalogFactory

#endif // ____x_ABI_CWindows_CAI_CModelContextProtocol_CIModelContextProtocolServerCatalogFactory_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CAI_CModelContextProtocol_CIModelContextProtocolServerInfo_FWD_DEFINED__
#define ____x_ABI_CWindows_CAI_CModelContextProtocol_CIModelContextProtocolServerInfo_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace AI {
            namespace ModelContextProtocol {
                interface IModelContextProtocolServerInfo;
            } /* ModelContextProtocol */
        } /* AI */
    } /* Windows */
} /* ABI */
#define __x_ABI_CWindows_CAI_CModelContextProtocol_CIModelContextProtocolServerInfo ABI::Windows::AI::ModelContextProtocol::IModelContextProtocolServerInfo

#endif // ____x_ABI_CWindows_CAI_CModelContextProtocol_CIModelContextProtocolServerInfo_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CAI_CModelContextProtocol_CIModelContextProtocolServerInfoFactory_FWD_DEFINED__
#define ____x_ABI_CWindows_CAI_CModelContextProtocol_CIModelContextProtocolServerInfoFactory_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace AI {
            namespace ModelContextProtocol {
                interface IModelContextProtocolServerInfoFactory;
            } /* ModelContextProtocol */
        } /* AI */
    } /* Windows */
} /* ABI */
#define __x_ABI_CWindows_CAI_CModelContextProtocol_CIModelContextProtocolServerInfoFactory ABI::Windows::AI::ModelContextProtocol::IModelContextProtocolServerInfoFactory

#endif // ____x_ABI_CWindows_CAI_CModelContextProtocol_CIModelContextProtocolServerInfoFactory_FWD_DEFINED__

// Parameterized interface forward declarations (C++)

// Collection interface definitions
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            class Package;
        } /* ApplicationModel */
    } /* Windows */
} /* ABI */

#ifndef ____x_ABI_CWindows_CApplicationModel_CIPackage_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CIPackage_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            interface IPackage;
        } /* ApplicationModel */
    } /* Windows */
} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CIPackage ABI::Windows::ApplicationModel::IPackage

#endif // ____x_ABI_CWindows_CApplicationModel_CIPackage_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CFoundation_CIClosable_FWD_DEFINED__
#define ____x_ABI_CWindows_CFoundation_CIClosable_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Foundation {
            interface IClosable;
        } /* Foundation */
    } /* Windows */
} /* ABI */
#define __x_ABI_CWindows_CFoundation_CIClosable ABI::Windows::Foundation::IClosable

#endif // ____x_ABI_CWindows_CFoundation_CIClosable_FWD_DEFINED__

namespace ABI {
    namespace Windows {
        namespace UI {
            typedef struct WindowId WindowId;
        } /* UI */
    } /* Windows */
} /* ABI */

namespace ABI {
    namespace Windows {
        namespace AI {
            namespace ModelContextProtocol {
                class ModelContextProtocolClientContext;
            } /* ModelContextProtocol */
        } /* AI */
    } /* Windows */
} /* ABI */

namespace ABI {
    namespace Windows {
        namespace AI {
            namespace ModelContextProtocol {
                class ModelContextProtocolServerInfo;
            } /* ModelContextProtocol */
        } /* AI */
    } /* Windows */
} /* ABI */

/*
 *
 * Interface Windows.AI.ModelContextProtocol.IModelContextProtocolClientContext
 *
 * Introduced to Windows.AI.ModelContextProtocol.ModelContextProtocolContract in version 1.0
 *
 * Type is for evaluation purposes and is subject to change or removal in future updates.
 *
 * Interface is a part of the implementation of type Windows.AI.ModelContextProtocol.ModelContextProtocolClientContext
 *
 */
#if defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
#if WINDOWS_AI_MODELCONTEXTPROTOCOL_MODELCONTEXTPROTOCOLCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CAI_CModelContextProtocol_CIModelContextProtocolClientContext_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CAI_CModelContextProtocol_CIModelContextProtocolClientContext_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_AI_ModelContextProtocol_IModelContextProtocolClientContext[] = L"Windows.AI.ModelContextProtocol.IModelContextProtocolClientContext";
namespace ABI {
    namespace Windows {
        namespace AI {
            namespace ModelContextProtocol {
                MIDL_INTERFACE("5bd93f10-c0aa-4963-b4c5-ac4a69bdbb33")
                IModelContextProtocolClientContext : public IInspectable
                {
                public:
                    virtual HRESULT STDMETHODCALLTYPE put_OwnerWindowId(
                        ABI::Windows::UI::WindowId value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE get_OwnerWindowId(
                        ABI::Windows::UI::WindowId* value
                        ) = 0;
                };

                MIDL_CONST_ID IID& IID_IModelContextProtocolClientContext = __uuidof(IModelContextProtocolClientContext);
            } /* ModelContextProtocol */
        } /* AI */
    } /* Windows */
} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CAI_CModelContextProtocol_CIModelContextProtocolClientContext;
#endif /* !defined(____x_ABI_CWindows_CAI_CModelContextProtocol_CIModelContextProtocolClientContext_INTERFACE_DEFINED__) */
#endif // WINDOWS_AI_MODELCONTEXTPROTOCOL_MODELCONTEXTPROTOCOLCONTRACT_VERSION >= 0x10000
#endif // defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)

/*
 *
 * Interface Windows.AI.ModelContextProtocol.IModelContextProtocolClientContextFactory
 *
 * Introduced to Windows.AI.ModelContextProtocol.ModelContextProtocolContract in version 1.0
 *
 * Type is for evaluation purposes and is subject to change or removal in future updates.
 *
 * Interface is a part of the implementation of type Windows.AI.ModelContextProtocol.ModelContextProtocolClientContext
 *
 */
#if defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
#if WINDOWS_AI_MODELCONTEXTPROTOCOL_MODELCONTEXTPROTOCOLCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CAI_CModelContextProtocol_CIModelContextProtocolClientContextFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CAI_CModelContextProtocol_CIModelContextProtocolClientContextFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_AI_ModelContextProtocol_IModelContextProtocolClientContextFactory[] = L"Windows.AI.ModelContextProtocol.IModelContextProtocolClientContextFactory";
namespace ABI {
    namespace Windows {
        namespace AI {
            namespace ModelContextProtocol {
                MIDL_INTERFACE("efb2ba31-148c-5ad7-ab8f-4f0e6154fedb")
                IModelContextProtocolClientContextFactory : public IInspectable
                {
                public:
                };

                MIDL_CONST_ID IID& IID_IModelContextProtocolClientContextFactory = __uuidof(IModelContextProtocolClientContextFactory);
            } /* ModelContextProtocol */
        } /* AI */
    } /* Windows */
} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CAI_CModelContextProtocol_CIModelContextProtocolClientContextFactory;
#endif /* !defined(____x_ABI_CWindows_CAI_CModelContextProtocol_CIModelContextProtocolClientContextFactory_INTERFACE_DEFINED__) */
#endif // WINDOWS_AI_MODELCONTEXTPROTOCOL_MODELCONTEXTPROTOCOLCONTRACT_VERSION >= 0x10000
#endif // defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)

/*
 *
 * Interface Windows.AI.ModelContextProtocol.IModelContextProtocolServer
 *
 * Introduced to Windows.AI.ModelContextProtocol.ModelContextProtocolContract in version 1.0
 *
 * Type is for evaluation purposes and is subject to change or removal in future updates.
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Foundation.IClosable
 *
 */
#if defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
#if WINDOWS_AI_MODELCONTEXTPROTOCOL_MODELCONTEXTPROTOCOLCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CAI_CModelContextProtocol_CIModelContextProtocolServer_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CAI_CModelContextProtocol_CIModelContextProtocolServer_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_AI_ModelContextProtocol_IModelContextProtocolServer[] = L"Windows.AI.ModelContextProtocol.IModelContextProtocolServer";
namespace ABI {
    namespace Windows {
        namespace AI {
            namespace ModelContextProtocol {
                MIDL_INTERFACE("9d78431d-533f-55dd-9692-dc1462f0bb39")
                IModelContextProtocolServer : public IInspectable
                {
                public:
                    virtual HRESULT STDMETHODCALLTYPE get_Command(
                        HSTRING* value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE GetCommandArguments(
                        UINT32* resultLength,
                        HSTRING** result
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE get_Info(
                        ABI::Windows::AI::ModelContextProtocol::IModelContextProtocolServerInfo** value
                        ) = 0;
                };

                MIDL_CONST_ID IID& IID_IModelContextProtocolServer = __uuidof(IModelContextProtocolServer);
            } /* ModelContextProtocol */
        } /* AI */
    } /* Windows */
} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CAI_CModelContextProtocol_CIModelContextProtocolServer;
#endif /* !defined(____x_ABI_CWindows_CAI_CModelContextProtocol_CIModelContextProtocolServer_INTERFACE_DEFINED__) */
#endif // WINDOWS_AI_MODELCONTEXTPROTOCOL_MODELCONTEXTPROTOCOLCONTRACT_VERSION >= 0x10000
#endif // defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)

/*
 *
 * Interface Windows.AI.ModelContextProtocol.IModelContextProtocolServerCatalog
 *
 * Introduced to Windows.AI.ModelContextProtocol.ModelContextProtocolContract in version 1.0
 *
 * Type is for evaluation purposes and is subject to change or removal in future updates.
 *
 * Interface is a part of the implementation of type Windows.AI.ModelContextProtocol.ModelContextProtocolServerCatalog
 *
 */
#if defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
#if WINDOWS_AI_MODELCONTEXTPROTOCOL_MODELCONTEXTPROTOCOLCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CAI_CModelContextProtocol_CIModelContextProtocolServerCatalog_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CAI_CModelContextProtocol_CIModelContextProtocolServerCatalog_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_AI_ModelContextProtocol_IModelContextProtocolServerCatalog[] = L"Windows.AI.ModelContextProtocol.IModelContextProtocolServerCatalog";
namespace ABI {
    namespace Windows {
        namespace AI {
            namespace ModelContextProtocol {
                MIDL_INTERFACE("062b8a5e-b124-4490-a1ba-4692875df83e")
                IModelContextProtocolServerCatalog : public IInspectable
                {
                public:
                    virtual HRESULT STDMETHODCALLTYPE GetServerInfos(
                        UINT32* resultLength,
                        ABI::Windows::AI::ModelContextProtocol::IModelContextProtocolServerInfo*** result
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE ActivateServer(
                        GUID serverId,
                        ABI::Windows::AI::ModelContextProtocol::IModelContextProtocolClientContext* client,
                        ABI::Windows::AI::ModelContextProtocol::IModelContextProtocolServer** result
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE CreateClientContext(
                        ABI::Windows::AI::ModelContextProtocol::IModelContextProtocolClientContext** result
                        ) = 0;
                };

                MIDL_CONST_ID IID& IID_IModelContextProtocolServerCatalog = __uuidof(IModelContextProtocolServerCatalog);
            } /* ModelContextProtocol */
        } /* AI */
    } /* Windows */
} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CAI_CModelContextProtocol_CIModelContextProtocolServerCatalog;
#endif /* !defined(____x_ABI_CWindows_CAI_CModelContextProtocol_CIModelContextProtocolServerCatalog_INTERFACE_DEFINED__) */
#endif // WINDOWS_AI_MODELCONTEXTPROTOCOL_MODELCONTEXTPROTOCOLCONTRACT_VERSION >= 0x10000
#endif // defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)

/*
 *
 * Interface Windows.AI.ModelContextProtocol.IModelContextProtocolServerCatalogFactory
 *
 * Introduced to Windows.AI.ModelContextProtocol.ModelContextProtocolContract in version 1.0
 *
 * Type is for evaluation purposes and is subject to change or removal in future updates.
 *
 * Interface is a part of the implementation of type Windows.AI.ModelContextProtocol.ModelContextProtocolServerCatalog
 *
 */
#if defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
#if WINDOWS_AI_MODELCONTEXTPROTOCOL_MODELCONTEXTPROTOCOLCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CAI_CModelContextProtocol_CIModelContextProtocolServerCatalogFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CAI_CModelContextProtocol_CIModelContextProtocolServerCatalogFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_AI_ModelContextProtocol_IModelContextProtocolServerCatalogFactory[] = L"Windows.AI.ModelContextProtocol.IModelContextProtocolServerCatalogFactory";
namespace ABI {
    namespace Windows {
        namespace AI {
            namespace ModelContextProtocol {
                MIDL_INTERFACE("6e5d0e8f-77e1-5a9d-b980-0779b3b128ba")
                IModelContextProtocolServerCatalogFactory : public IInspectable
                {
                public:
                };

                MIDL_CONST_ID IID& IID_IModelContextProtocolServerCatalogFactory = __uuidof(IModelContextProtocolServerCatalogFactory);
            } /* ModelContextProtocol */
        } /* AI */
    } /* Windows */
} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CAI_CModelContextProtocol_CIModelContextProtocolServerCatalogFactory;
#endif /* !defined(____x_ABI_CWindows_CAI_CModelContextProtocol_CIModelContextProtocolServerCatalogFactory_INTERFACE_DEFINED__) */
#endif // WINDOWS_AI_MODELCONTEXTPROTOCOL_MODELCONTEXTPROTOCOLCONTRACT_VERSION >= 0x10000
#endif // defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)

/*
 *
 * Interface Windows.AI.ModelContextProtocol.IModelContextProtocolServerInfo
 *
 * Introduced to Windows.AI.ModelContextProtocol.ModelContextProtocolContract in version 1.0
 *
 * Type is for evaluation purposes and is subject to change or removal in future updates.
 *
 * Interface is a part of the implementation of type Windows.AI.ModelContextProtocol.ModelContextProtocolServerInfo
 *
 */
#if defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
#if WINDOWS_AI_MODELCONTEXTPROTOCOL_MODELCONTEXTPROTOCOLCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CAI_CModelContextProtocol_CIModelContextProtocolServerInfo_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CAI_CModelContextProtocol_CIModelContextProtocolServerInfo_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_AI_ModelContextProtocol_IModelContextProtocolServerInfo[] = L"Windows.AI.ModelContextProtocol.IModelContextProtocolServerInfo";
namespace ABI {
    namespace Windows {
        namespace AI {
            namespace ModelContextProtocol {
                MIDL_INTERFACE("503102ba-831b-47e5-b97b-e7b06209dd8b")
                IModelContextProtocolServerInfo : public IInspectable
                {
                public:
                    virtual HRESULT STDMETHODCALLTYPE get_Id(
                        GUID* value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE get_Name(
                        HSTRING* value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE get_Description(
                        HSTRING* value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE GetPackage(
                        ABI::Windows::ApplicationModel::IPackage** result
                        ) = 0;
                };

                MIDL_CONST_ID IID& IID_IModelContextProtocolServerInfo = __uuidof(IModelContextProtocolServerInfo);
            } /* ModelContextProtocol */
        } /* AI */
    } /* Windows */
} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CAI_CModelContextProtocol_CIModelContextProtocolServerInfo;
#endif /* !defined(____x_ABI_CWindows_CAI_CModelContextProtocol_CIModelContextProtocolServerInfo_INTERFACE_DEFINED__) */
#endif // WINDOWS_AI_MODELCONTEXTPROTOCOL_MODELCONTEXTPROTOCOLCONTRACT_VERSION >= 0x10000
#endif // defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)

/*
 *
 * Interface Windows.AI.ModelContextProtocol.IModelContextProtocolServerInfoFactory
 *
 * Introduced to Windows.AI.ModelContextProtocol.ModelContextProtocolContract in version 1.0
 *
 * Type is for evaluation purposes and is subject to change or removal in future updates.
 *
 * Interface is a part of the implementation of type Windows.AI.ModelContextProtocol.ModelContextProtocolServerInfo
 *
 */
#if defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
#if WINDOWS_AI_MODELCONTEXTPROTOCOL_MODELCONTEXTPROTOCOLCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CAI_CModelContextProtocol_CIModelContextProtocolServerInfoFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CAI_CModelContextProtocol_CIModelContextProtocolServerInfoFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_AI_ModelContextProtocol_IModelContextProtocolServerInfoFactory[] = L"Windows.AI.ModelContextProtocol.IModelContextProtocolServerInfoFactory";
namespace ABI {
    namespace Windows {
        namespace AI {
            namespace ModelContextProtocol {
                MIDL_INTERFACE("c93ee14e-e477-5a65-bd80-2a7860de7ead")
                IModelContextProtocolServerInfoFactory : public IInspectable
                {
                public:
                };

                MIDL_CONST_ID IID& IID_IModelContextProtocolServerInfoFactory = __uuidof(IModelContextProtocolServerInfoFactory);
            } /* ModelContextProtocol */
        } /* AI */
    } /* Windows */
} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CAI_CModelContextProtocol_CIModelContextProtocolServerInfoFactory;
#endif /* !defined(____x_ABI_CWindows_CAI_CModelContextProtocol_CIModelContextProtocolServerInfoFactory_INTERFACE_DEFINED__) */
#endif // WINDOWS_AI_MODELCONTEXTPROTOCOL_MODELCONTEXTPROTOCOLCONTRACT_VERSION >= 0x10000
#endif // defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)

/*
 *
 * Class Windows.AI.ModelContextProtocol.ModelContextProtocolClientContext
 *
 * Introduced to Windows.AI.ModelContextProtocol.ModelContextProtocolContract in version 1.0
 *
 * Type is for evaluation purposes and is subject to change or removal in future updates.
 *
 * Class implements the following interfaces:
 *    Windows.AI.ModelContextProtocol.IModelContextProtocolClientContext ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
#if WINDOWS_AI_MODELCONTEXTPROTOCOL_MODELCONTEXTPROTOCOLCONTRACT_VERSION >= 0x10000
#ifndef RUNTIMECLASS_Windows_AI_ModelContextProtocol_ModelContextProtocolClientContext_DEFINED
#define RUNTIMECLASS_Windows_AI_ModelContextProtocol_ModelContextProtocolClientContext_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_AI_ModelContextProtocol_ModelContextProtocolClientContext[] = L"Windows.AI.ModelContextProtocol.ModelContextProtocolClientContext";
#endif
#endif // WINDOWS_AI_MODELCONTEXTPROTOCOL_MODELCONTEXTPROTOCOLCONTRACT_VERSION >= 0x10000
#endif // defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)

/*
 *
 * Class Windows.AI.ModelContextProtocol.ModelContextProtocolServerCatalog
 *
 * Introduced to Windows.AI.ModelContextProtocol.ModelContextProtocolContract in version 1.0
 *
 * Type is for evaluation purposes and is subject to change or removal in future updates.
 *
 * Class implements the following interfaces:
 *    Windows.AI.ModelContextProtocol.IModelContextProtocolServerCatalog ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
#if WINDOWS_AI_MODELCONTEXTPROTOCOL_MODELCONTEXTPROTOCOLCONTRACT_VERSION >= 0x10000
#ifndef RUNTIMECLASS_Windows_AI_ModelContextProtocol_ModelContextProtocolServerCatalog_DEFINED
#define RUNTIMECLASS_Windows_AI_ModelContextProtocol_ModelContextProtocolServerCatalog_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_AI_ModelContextProtocol_ModelContextProtocolServerCatalog[] = L"Windows.AI.ModelContextProtocol.ModelContextProtocolServerCatalog";
#endif
#endif // WINDOWS_AI_MODELCONTEXTPROTOCOL_MODELCONTEXTPROTOCOLCONTRACT_VERSION >= 0x10000
#endif // defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)

/*
 *
 * Class Windows.AI.ModelContextProtocol.ModelContextProtocolServerInfo
 *
 * Introduced to Windows.AI.ModelContextProtocol.ModelContextProtocolContract in version 1.0
 *
 * Type is for evaluation purposes and is subject to change or removal in future updates.
 *
 * Class implements the following interfaces:
 *    Windows.AI.ModelContextProtocol.IModelContextProtocolServerInfo ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
#if WINDOWS_AI_MODELCONTEXTPROTOCOL_MODELCONTEXTPROTOCOLCONTRACT_VERSION >= 0x10000
#ifndef RUNTIMECLASS_Windows_AI_ModelContextProtocol_ModelContextProtocolServerInfo_DEFINED
#define RUNTIMECLASS_Windows_AI_ModelContextProtocol_ModelContextProtocolServerInfo_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_AI_ModelContextProtocol_ModelContextProtocolServerInfo[] = L"Windows.AI.ModelContextProtocol.ModelContextProtocolServerInfo";
#endif
#endif // WINDOWS_AI_MODELCONTEXTPROTOCOL_MODELCONTEXTPROTOCOLCONTRACT_VERSION >= 0x10000
#endif // defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)

#else // !defined(__cplusplus)
/* Forward Declarations */
#ifndef ____x_ABI_CWindows_CAI_CModelContextProtocol_CIModelContextProtocolClientContext_FWD_DEFINED__
#define ____x_ABI_CWindows_CAI_CModelContextProtocol_CIModelContextProtocolClientContext_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CAI_CModelContextProtocol_CIModelContextProtocolClientContext __x_ABI_CWindows_CAI_CModelContextProtocol_CIModelContextProtocolClientContext;

#endif // ____x_ABI_CWindows_CAI_CModelContextProtocol_CIModelContextProtocolClientContext_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CAI_CModelContextProtocol_CIModelContextProtocolClientContextFactory_FWD_DEFINED__
#define ____x_ABI_CWindows_CAI_CModelContextProtocol_CIModelContextProtocolClientContextFactory_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CAI_CModelContextProtocol_CIModelContextProtocolClientContextFactory __x_ABI_CWindows_CAI_CModelContextProtocol_CIModelContextProtocolClientContextFactory;

#endif // ____x_ABI_CWindows_CAI_CModelContextProtocol_CIModelContextProtocolClientContextFactory_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CAI_CModelContextProtocol_CIModelContextProtocolServer_FWD_DEFINED__
#define ____x_ABI_CWindows_CAI_CModelContextProtocol_CIModelContextProtocolServer_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CAI_CModelContextProtocol_CIModelContextProtocolServer __x_ABI_CWindows_CAI_CModelContextProtocol_CIModelContextProtocolServer;

#endif // ____x_ABI_CWindows_CAI_CModelContextProtocol_CIModelContextProtocolServer_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CAI_CModelContextProtocol_CIModelContextProtocolServerCatalog_FWD_DEFINED__
#define ____x_ABI_CWindows_CAI_CModelContextProtocol_CIModelContextProtocolServerCatalog_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CAI_CModelContextProtocol_CIModelContextProtocolServerCatalog __x_ABI_CWindows_CAI_CModelContextProtocol_CIModelContextProtocolServerCatalog;

#endif // ____x_ABI_CWindows_CAI_CModelContextProtocol_CIModelContextProtocolServerCatalog_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CAI_CModelContextProtocol_CIModelContextProtocolServerCatalogFactory_FWD_DEFINED__
#define ____x_ABI_CWindows_CAI_CModelContextProtocol_CIModelContextProtocolServerCatalogFactory_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CAI_CModelContextProtocol_CIModelContextProtocolServerCatalogFactory __x_ABI_CWindows_CAI_CModelContextProtocol_CIModelContextProtocolServerCatalogFactory;

#endif // ____x_ABI_CWindows_CAI_CModelContextProtocol_CIModelContextProtocolServerCatalogFactory_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CAI_CModelContextProtocol_CIModelContextProtocolServerInfo_FWD_DEFINED__
#define ____x_ABI_CWindows_CAI_CModelContextProtocol_CIModelContextProtocolServerInfo_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CAI_CModelContextProtocol_CIModelContextProtocolServerInfo __x_ABI_CWindows_CAI_CModelContextProtocol_CIModelContextProtocolServerInfo;

#endif // ____x_ABI_CWindows_CAI_CModelContextProtocol_CIModelContextProtocolServerInfo_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CAI_CModelContextProtocol_CIModelContextProtocolServerInfoFactory_FWD_DEFINED__
#define ____x_ABI_CWindows_CAI_CModelContextProtocol_CIModelContextProtocolServerInfoFactory_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CAI_CModelContextProtocol_CIModelContextProtocolServerInfoFactory __x_ABI_CWindows_CAI_CModelContextProtocol_CIModelContextProtocolServerInfoFactory;

#endif // ____x_ABI_CWindows_CAI_CModelContextProtocol_CIModelContextProtocolServerInfoFactory_FWD_DEFINED__

// Parameterized interface forward declarations (C)

// Collection interface definitions

#ifndef ____x_ABI_CWindows_CApplicationModel_CIPackage_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CIPackage_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CIPackage __x_ABI_CWindows_CApplicationModel_CIPackage;

#endif // ____x_ABI_CWindows_CApplicationModel_CIPackage_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CFoundation_CIClosable_FWD_DEFINED__
#define ____x_ABI_CWindows_CFoundation_CIClosable_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CFoundation_CIClosable __x_ABI_CWindows_CFoundation_CIClosable;

#endif // ____x_ABI_CWindows_CFoundation_CIClosable_FWD_DEFINED__

typedef struct __x_ABI_CWindows_CUI_CWindowId __x_ABI_CWindows_CUI_CWindowId;

/*
 *
 * Interface Windows.AI.ModelContextProtocol.IModelContextProtocolClientContext
 *
 * Introduced to Windows.AI.ModelContextProtocol.ModelContextProtocolContract in version 1.0
 *
 * Type is for evaluation purposes and is subject to change or removal in future updates.
 *
 * Interface is a part of the implementation of type Windows.AI.ModelContextProtocol.ModelContextProtocolClientContext
 *
 */
#if defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
#if WINDOWS_AI_MODELCONTEXTPROTOCOL_MODELCONTEXTPROTOCOLCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CAI_CModelContextProtocol_CIModelContextProtocolClientContext_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CAI_CModelContextProtocol_CIModelContextProtocolClientContext_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_AI_ModelContextProtocol_IModelContextProtocolClientContext[] = L"Windows.AI.ModelContextProtocol.IModelContextProtocolClientContext";
typedef struct __x_ABI_CWindows_CAI_CModelContextProtocol_CIModelContextProtocolClientContextVtbl
{
    BEGIN_INTERFACE

    HRESULT (STDMETHODCALLTYPE* QueryInterface)(__x_ABI_CWindows_CAI_CModelContextProtocol_CIModelContextProtocolClientContext* This,
        REFIID riid,
        void** ppvObject);
    ULONG (STDMETHODCALLTYPE* AddRef)(__x_ABI_CWindows_CAI_CModelContextProtocol_CIModelContextProtocolClientContext* This);
    ULONG (STDMETHODCALLTYPE* Release)(__x_ABI_CWindows_CAI_CModelContextProtocol_CIModelContextProtocolClientContext* This);
    HRESULT (STDMETHODCALLTYPE* GetIids)(__x_ABI_CWindows_CAI_CModelContextProtocol_CIModelContextProtocolClientContext* This,
        ULONG* iidCount,
        IID** iids);
    HRESULT (STDMETHODCALLTYPE* GetRuntimeClassName)(__x_ABI_CWindows_CAI_CModelContextProtocol_CIModelContextProtocolClientContext* This,
        HSTRING* className);
    HRESULT (STDMETHODCALLTYPE* GetTrustLevel)(__x_ABI_CWindows_CAI_CModelContextProtocol_CIModelContextProtocolClientContext* This,
        TrustLevel* trustLevel);
    HRESULT (STDMETHODCALLTYPE* put_OwnerWindowId)(__x_ABI_CWindows_CAI_CModelContextProtocol_CIModelContextProtocolClientContext* This,
        struct __x_ABI_CWindows_CUI_CWindowId value);
    HRESULT (STDMETHODCALLTYPE* get_OwnerWindowId)(__x_ABI_CWindows_CAI_CModelContextProtocol_CIModelContextProtocolClientContext* This,
        struct __x_ABI_CWindows_CUI_CWindowId* value);

    END_INTERFACE
} __x_ABI_CWindows_CAI_CModelContextProtocol_CIModelContextProtocolClientContextVtbl;

interface __x_ABI_CWindows_CAI_CModelContextProtocol_CIModelContextProtocolClientContext
{
    CONST_VTBL struct __x_ABI_CWindows_CAI_CModelContextProtocol_CIModelContextProtocolClientContextVtbl* lpVtbl;
};

#ifdef COBJMACROS

#define __x_ABI_CWindows_CAI_CModelContextProtocol_CIModelContextProtocolClientContext_QueryInterface(This, riid, ppvObject) \
    ((This)->lpVtbl->QueryInterface(This, riid, ppvObject))

#define __x_ABI_CWindows_CAI_CModelContextProtocol_CIModelContextProtocolClientContext_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))

#define __x_ABI_CWindows_CAI_CModelContextProtocol_CIModelContextProtocolClientContext_Release(This) \
    ((This)->lpVtbl->Release(This))

#define __x_ABI_CWindows_CAI_CModelContextProtocol_CIModelContextProtocolClientContext_GetIids(This, iidCount, iids) \
    ((This)->lpVtbl->GetIids(This, iidCount, iids))

#define __x_ABI_CWindows_CAI_CModelContextProtocol_CIModelContextProtocolClientContext_GetRuntimeClassName(This, className) \
    ((This)->lpVtbl->GetRuntimeClassName(This, className))

#define __x_ABI_CWindows_CAI_CModelContextProtocol_CIModelContextProtocolClientContext_GetTrustLevel(This, trustLevel) \
    ((This)->lpVtbl->GetTrustLevel(This, trustLevel))

#define __x_ABI_CWindows_CAI_CModelContextProtocol_CIModelContextProtocolClientContext_put_OwnerWindowId(This, value) \
    ((This)->lpVtbl->put_OwnerWindowId(This, value))

#define __x_ABI_CWindows_CAI_CModelContextProtocol_CIModelContextProtocolClientContext_get_OwnerWindowId(This, value) \
    ((This)->lpVtbl->get_OwnerWindowId(This, value))

#endif /* COBJMACROS */

EXTERN_C const IID IID___x_ABI_CWindows_CAI_CModelContextProtocol_CIModelContextProtocolClientContext;
#endif /* !defined(____x_ABI_CWindows_CAI_CModelContextProtocol_CIModelContextProtocolClientContext_INTERFACE_DEFINED__) */
#endif // WINDOWS_AI_MODELCONTEXTPROTOCOL_MODELCONTEXTPROTOCOLCONTRACT_VERSION >= 0x10000
#endif // defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)

/*
 *
 * Interface Windows.AI.ModelContextProtocol.IModelContextProtocolClientContextFactory
 *
 * Introduced to Windows.AI.ModelContextProtocol.ModelContextProtocolContract in version 1.0
 *
 * Type is for evaluation purposes and is subject to change or removal in future updates.
 *
 * Interface is a part of the implementation of type Windows.AI.ModelContextProtocol.ModelContextProtocolClientContext
 *
 */
#if defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
#if WINDOWS_AI_MODELCONTEXTPROTOCOL_MODELCONTEXTPROTOCOLCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CAI_CModelContextProtocol_CIModelContextProtocolClientContextFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CAI_CModelContextProtocol_CIModelContextProtocolClientContextFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_AI_ModelContextProtocol_IModelContextProtocolClientContextFactory[] = L"Windows.AI.ModelContextProtocol.IModelContextProtocolClientContextFactory";
typedef struct __x_ABI_CWindows_CAI_CModelContextProtocol_CIModelContextProtocolClientContextFactoryVtbl
{
    BEGIN_INTERFACE

    HRESULT (STDMETHODCALLTYPE* QueryInterface)(__x_ABI_CWindows_CAI_CModelContextProtocol_CIModelContextProtocolClientContextFactory* This,
        REFIID riid,
        void** ppvObject);
    ULONG (STDMETHODCALLTYPE* AddRef)(__x_ABI_CWindows_CAI_CModelContextProtocol_CIModelContextProtocolClientContextFactory* This);
    ULONG (STDMETHODCALLTYPE* Release)(__x_ABI_CWindows_CAI_CModelContextProtocol_CIModelContextProtocolClientContextFactory* This);
    HRESULT (STDMETHODCALLTYPE* GetIids)(__x_ABI_CWindows_CAI_CModelContextProtocol_CIModelContextProtocolClientContextFactory* This,
        ULONG* iidCount,
        IID** iids);
    HRESULT (STDMETHODCALLTYPE* GetRuntimeClassName)(__x_ABI_CWindows_CAI_CModelContextProtocol_CIModelContextProtocolClientContextFactory* This,
        HSTRING* className);
    HRESULT (STDMETHODCALLTYPE* GetTrustLevel)(__x_ABI_CWindows_CAI_CModelContextProtocol_CIModelContextProtocolClientContextFactory* This,
        TrustLevel* trustLevel);

    END_INTERFACE
} __x_ABI_CWindows_CAI_CModelContextProtocol_CIModelContextProtocolClientContextFactoryVtbl;

interface __x_ABI_CWindows_CAI_CModelContextProtocol_CIModelContextProtocolClientContextFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CAI_CModelContextProtocol_CIModelContextProtocolClientContextFactoryVtbl* lpVtbl;
};

#ifdef COBJMACROS

#define __x_ABI_CWindows_CAI_CModelContextProtocol_CIModelContextProtocolClientContextFactory_QueryInterface(This, riid, ppvObject) \
    ((This)->lpVtbl->QueryInterface(This, riid, ppvObject))

#define __x_ABI_CWindows_CAI_CModelContextProtocol_CIModelContextProtocolClientContextFactory_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))

#define __x_ABI_CWindows_CAI_CModelContextProtocol_CIModelContextProtocolClientContextFactory_Release(This) \
    ((This)->lpVtbl->Release(This))

#define __x_ABI_CWindows_CAI_CModelContextProtocol_CIModelContextProtocolClientContextFactory_GetIids(This, iidCount, iids) \
    ((This)->lpVtbl->GetIids(This, iidCount, iids))

#define __x_ABI_CWindows_CAI_CModelContextProtocol_CIModelContextProtocolClientContextFactory_GetRuntimeClassName(This, className) \
    ((This)->lpVtbl->GetRuntimeClassName(This, className))

#define __x_ABI_CWindows_CAI_CModelContextProtocol_CIModelContextProtocolClientContextFactory_GetTrustLevel(This, trustLevel) \
    ((This)->lpVtbl->GetTrustLevel(This, trustLevel))

#endif /* COBJMACROS */

EXTERN_C const IID IID___x_ABI_CWindows_CAI_CModelContextProtocol_CIModelContextProtocolClientContextFactory;
#endif /* !defined(____x_ABI_CWindows_CAI_CModelContextProtocol_CIModelContextProtocolClientContextFactory_INTERFACE_DEFINED__) */
#endif // WINDOWS_AI_MODELCONTEXTPROTOCOL_MODELCONTEXTPROTOCOLCONTRACT_VERSION >= 0x10000
#endif // defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)

/*
 *
 * Interface Windows.AI.ModelContextProtocol.IModelContextProtocolServer
 *
 * Introduced to Windows.AI.ModelContextProtocol.ModelContextProtocolContract in version 1.0
 *
 * Type is for evaluation purposes and is subject to change or removal in future updates.
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Foundation.IClosable
 *
 */
#if defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
#if WINDOWS_AI_MODELCONTEXTPROTOCOL_MODELCONTEXTPROTOCOLCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CAI_CModelContextProtocol_CIModelContextProtocolServer_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CAI_CModelContextProtocol_CIModelContextProtocolServer_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_AI_ModelContextProtocol_IModelContextProtocolServer[] = L"Windows.AI.ModelContextProtocol.IModelContextProtocolServer";
typedef struct __x_ABI_CWindows_CAI_CModelContextProtocol_CIModelContextProtocolServerVtbl
{
    BEGIN_INTERFACE

    HRESULT (STDMETHODCALLTYPE* QueryInterface)(__x_ABI_CWindows_CAI_CModelContextProtocol_CIModelContextProtocolServer* This,
        REFIID riid,
        void** ppvObject);
    ULONG (STDMETHODCALLTYPE* AddRef)(__x_ABI_CWindows_CAI_CModelContextProtocol_CIModelContextProtocolServer* This);
    ULONG (STDMETHODCALLTYPE* Release)(__x_ABI_CWindows_CAI_CModelContextProtocol_CIModelContextProtocolServer* This);
    HRESULT (STDMETHODCALLTYPE* GetIids)(__x_ABI_CWindows_CAI_CModelContextProtocol_CIModelContextProtocolServer* This,
        ULONG* iidCount,
        IID** iids);
    HRESULT (STDMETHODCALLTYPE* GetRuntimeClassName)(__x_ABI_CWindows_CAI_CModelContextProtocol_CIModelContextProtocolServer* This,
        HSTRING* className);
    HRESULT (STDMETHODCALLTYPE* GetTrustLevel)(__x_ABI_CWindows_CAI_CModelContextProtocol_CIModelContextProtocolServer* This,
        TrustLevel* trustLevel);
    HRESULT (STDMETHODCALLTYPE* get_Command)(__x_ABI_CWindows_CAI_CModelContextProtocol_CIModelContextProtocolServer* This,
        HSTRING* value);
    HRESULT (STDMETHODCALLTYPE* GetCommandArguments)(__x_ABI_CWindows_CAI_CModelContextProtocol_CIModelContextProtocolServer* This,
        UINT32* resultLength,
        HSTRING** result);
    HRESULT (STDMETHODCALLTYPE* get_Info)(__x_ABI_CWindows_CAI_CModelContextProtocol_CIModelContextProtocolServer* This,
        __x_ABI_CWindows_CAI_CModelContextProtocol_CIModelContextProtocolServerInfo** value);

    END_INTERFACE
} __x_ABI_CWindows_CAI_CModelContextProtocol_CIModelContextProtocolServerVtbl;

interface __x_ABI_CWindows_CAI_CModelContextProtocol_CIModelContextProtocolServer
{
    CONST_VTBL struct __x_ABI_CWindows_CAI_CModelContextProtocol_CIModelContextProtocolServerVtbl* lpVtbl;
};

#ifdef COBJMACROS

#define __x_ABI_CWindows_CAI_CModelContextProtocol_CIModelContextProtocolServer_QueryInterface(This, riid, ppvObject) \
    ((This)->lpVtbl->QueryInterface(This, riid, ppvObject))

#define __x_ABI_CWindows_CAI_CModelContextProtocol_CIModelContextProtocolServer_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))

#define __x_ABI_CWindows_CAI_CModelContextProtocol_CIModelContextProtocolServer_Release(This) \
    ((This)->lpVtbl->Release(This))

#define __x_ABI_CWindows_CAI_CModelContextProtocol_CIModelContextProtocolServer_GetIids(This, iidCount, iids) \
    ((This)->lpVtbl->GetIids(This, iidCount, iids))

#define __x_ABI_CWindows_CAI_CModelContextProtocol_CIModelContextProtocolServer_GetRuntimeClassName(This, className) \
    ((This)->lpVtbl->GetRuntimeClassName(This, className))

#define __x_ABI_CWindows_CAI_CModelContextProtocol_CIModelContextProtocolServer_GetTrustLevel(This, trustLevel) \
    ((This)->lpVtbl->GetTrustLevel(This, trustLevel))

#define __x_ABI_CWindows_CAI_CModelContextProtocol_CIModelContextProtocolServer_get_Command(This, value) \
    ((This)->lpVtbl->get_Command(This, value))

#define __x_ABI_CWindows_CAI_CModelContextProtocol_CIModelContextProtocolServer_GetCommandArguments(This, resultLength, result) \
    ((This)->lpVtbl->GetCommandArguments(This, resultLength, result))

#define __x_ABI_CWindows_CAI_CModelContextProtocol_CIModelContextProtocolServer_get_Info(This, value) \
    ((This)->lpVtbl->get_Info(This, value))

#endif /* COBJMACROS */

EXTERN_C const IID IID___x_ABI_CWindows_CAI_CModelContextProtocol_CIModelContextProtocolServer;
#endif /* !defined(____x_ABI_CWindows_CAI_CModelContextProtocol_CIModelContextProtocolServer_INTERFACE_DEFINED__) */
#endif // WINDOWS_AI_MODELCONTEXTPROTOCOL_MODELCONTEXTPROTOCOLCONTRACT_VERSION >= 0x10000
#endif // defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)

/*
 *
 * Interface Windows.AI.ModelContextProtocol.IModelContextProtocolServerCatalog
 *
 * Introduced to Windows.AI.ModelContextProtocol.ModelContextProtocolContract in version 1.0
 *
 * Type is for evaluation purposes and is subject to change or removal in future updates.
 *
 * Interface is a part of the implementation of type Windows.AI.ModelContextProtocol.ModelContextProtocolServerCatalog
 *
 */
#if defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
#if WINDOWS_AI_MODELCONTEXTPROTOCOL_MODELCONTEXTPROTOCOLCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CAI_CModelContextProtocol_CIModelContextProtocolServerCatalog_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CAI_CModelContextProtocol_CIModelContextProtocolServerCatalog_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_AI_ModelContextProtocol_IModelContextProtocolServerCatalog[] = L"Windows.AI.ModelContextProtocol.IModelContextProtocolServerCatalog";
typedef struct __x_ABI_CWindows_CAI_CModelContextProtocol_CIModelContextProtocolServerCatalogVtbl
{
    BEGIN_INTERFACE

    HRESULT (STDMETHODCALLTYPE* QueryInterface)(__x_ABI_CWindows_CAI_CModelContextProtocol_CIModelContextProtocolServerCatalog* This,
        REFIID riid,
        void** ppvObject);
    ULONG (STDMETHODCALLTYPE* AddRef)(__x_ABI_CWindows_CAI_CModelContextProtocol_CIModelContextProtocolServerCatalog* This);
    ULONG (STDMETHODCALLTYPE* Release)(__x_ABI_CWindows_CAI_CModelContextProtocol_CIModelContextProtocolServerCatalog* This);
    HRESULT (STDMETHODCALLTYPE* GetIids)(__x_ABI_CWindows_CAI_CModelContextProtocol_CIModelContextProtocolServerCatalog* This,
        ULONG* iidCount,
        IID** iids);
    HRESULT (STDMETHODCALLTYPE* GetRuntimeClassName)(__x_ABI_CWindows_CAI_CModelContextProtocol_CIModelContextProtocolServerCatalog* This,
        HSTRING* className);
    HRESULT (STDMETHODCALLTYPE* GetTrustLevel)(__x_ABI_CWindows_CAI_CModelContextProtocol_CIModelContextProtocolServerCatalog* This,
        TrustLevel* trustLevel);
    HRESULT (STDMETHODCALLTYPE* GetServerInfos)(__x_ABI_CWindows_CAI_CModelContextProtocol_CIModelContextProtocolServerCatalog* This,
        UINT32* resultLength,
        __x_ABI_CWindows_CAI_CModelContextProtocol_CIModelContextProtocolServerInfo*** result);
    HRESULT (STDMETHODCALLTYPE* ActivateServer)(__x_ABI_CWindows_CAI_CModelContextProtocol_CIModelContextProtocolServerCatalog* This,
        GUID serverId,
        __x_ABI_CWindows_CAI_CModelContextProtocol_CIModelContextProtocolClientContext* client,
        __x_ABI_CWindows_CAI_CModelContextProtocol_CIModelContextProtocolServer** result);
    HRESULT (STDMETHODCALLTYPE* CreateClientContext)(__x_ABI_CWindows_CAI_CModelContextProtocol_CIModelContextProtocolServerCatalog* This,
        __x_ABI_CWindows_CAI_CModelContextProtocol_CIModelContextProtocolClientContext** result);

    END_INTERFACE
} __x_ABI_CWindows_CAI_CModelContextProtocol_CIModelContextProtocolServerCatalogVtbl;

interface __x_ABI_CWindows_CAI_CModelContextProtocol_CIModelContextProtocolServerCatalog
{
    CONST_VTBL struct __x_ABI_CWindows_CAI_CModelContextProtocol_CIModelContextProtocolServerCatalogVtbl* lpVtbl;
};

#ifdef COBJMACROS

#define __x_ABI_CWindows_CAI_CModelContextProtocol_CIModelContextProtocolServerCatalog_QueryInterface(This, riid, ppvObject) \
    ((This)->lpVtbl->QueryInterface(This, riid, ppvObject))

#define __x_ABI_CWindows_CAI_CModelContextProtocol_CIModelContextProtocolServerCatalog_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))

#define __x_ABI_CWindows_CAI_CModelContextProtocol_CIModelContextProtocolServerCatalog_Release(This) \
    ((This)->lpVtbl->Release(This))

#define __x_ABI_CWindows_CAI_CModelContextProtocol_CIModelContextProtocolServerCatalog_GetIids(This, iidCount, iids) \
    ((This)->lpVtbl->GetIids(This, iidCount, iids))

#define __x_ABI_CWindows_CAI_CModelContextProtocol_CIModelContextProtocolServerCatalog_GetRuntimeClassName(This, className) \
    ((This)->lpVtbl->GetRuntimeClassName(This, className))

#define __x_ABI_CWindows_CAI_CModelContextProtocol_CIModelContextProtocolServerCatalog_GetTrustLevel(This, trustLevel) \
    ((This)->lpVtbl->GetTrustLevel(This, trustLevel))

#define __x_ABI_CWindows_CAI_CModelContextProtocol_CIModelContextProtocolServerCatalog_GetServerInfos(This, resultLength, result) \
    ((This)->lpVtbl->GetServerInfos(This, resultLength, result))

#define __x_ABI_CWindows_CAI_CModelContextProtocol_CIModelContextProtocolServerCatalog_ActivateServer(This, serverId, client, result) \
    ((This)->lpVtbl->ActivateServer(This, serverId, client, result))

#define __x_ABI_CWindows_CAI_CModelContextProtocol_CIModelContextProtocolServerCatalog_CreateClientContext(This, result) \
    ((This)->lpVtbl->CreateClientContext(This, result))

#endif /* COBJMACROS */

EXTERN_C const IID IID___x_ABI_CWindows_CAI_CModelContextProtocol_CIModelContextProtocolServerCatalog;
#endif /* !defined(____x_ABI_CWindows_CAI_CModelContextProtocol_CIModelContextProtocolServerCatalog_INTERFACE_DEFINED__) */
#endif // WINDOWS_AI_MODELCONTEXTPROTOCOL_MODELCONTEXTPROTOCOLCONTRACT_VERSION >= 0x10000
#endif // defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)

/*
 *
 * Interface Windows.AI.ModelContextProtocol.IModelContextProtocolServerCatalogFactory
 *
 * Introduced to Windows.AI.ModelContextProtocol.ModelContextProtocolContract in version 1.0
 *
 * Type is for evaluation purposes and is subject to change or removal in future updates.
 *
 * Interface is a part of the implementation of type Windows.AI.ModelContextProtocol.ModelContextProtocolServerCatalog
 *
 */
#if defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
#if WINDOWS_AI_MODELCONTEXTPROTOCOL_MODELCONTEXTPROTOCOLCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CAI_CModelContextProtocol_CIModelContextProtocolServerCatalogFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CAI_CModelContextProtocol_CIModelContextProtocolServerCatalogFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_AI_ModelContextProtocol_IModelContextProtocolServerCatalogFactory[] = L"Windows.AI.ModelContextProtocol.IModelContextProtocolServerCatalogFactory";
typedef struct __x_ABI_CWindows_CAI_CModelContextProtocol_CIModelContextProtocolServerCatalogFactoryVtbl
{
    BEGIN_INTERFACE

    HRESULT (STDMETHODCALLTYPE* QueryInterface)(__x_ABI_CWindows_CAI_CModelContextProtocol_CIModelContextProtocolServerCatalogFactory* This,
        REFIID riid,
        void** ppvObject);
    ULONG (STDMETHODCALLTYPE* AddRef)(__x_ABI_CWindows_CAI_CModelContextProtocol_CIModelContextProtocolServerCatalogFactory* This);
    ULONG (STDMETHODCALLTYPE* Release)(__x_ABI_CWindows_CAI_CModelContextProtocol_CIModelContextProtocolServerCatalogFactory* This);
    HRESULT (STDMETHODCALLTYPE* GetIids)(__x_ABI_CWindows_CAI_CModelContextProtocol_CIModelContextProtocolServerCatalogFactory* This,
        ULONG* iidCount,
        IID** iids);
    HRESULT (STDMETHODCALLTYPE* GetRuntimeClassName)(__x_ABI_CWindows_CAI_CModelContextProtocol_CIModelContextProtocolServerCatalogFactory* This,
        HSTRING* className);
    HRESULT (STDMETHODCALLTYPE* GetTrustLevel)(__x_ABI_CWindows_CAI_CModelContextProtocol_CIModelContextProtocolServerCatalogFactory* This,
        TrustLevel* trustLevel);

    END_INTERFACE
} __x_ABI_CWindows_CAI_CModelContextProtocol_CIModelContextProtocolServerCatalogFactoryVtbl;

interface __x_ABI_CWindows_CAI_CModelContextProtocol_CIModelContextProtocolServerCatalogFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CAI_CModelContextProtocol_CIModelContextProtocolServerCatalogFactoryVtbl* lpVtbl;
};

#ifdef COBJMACROS

#define __x_ABI_CWindows_CAI_CModelContextProtocol_CIModelContextProtocolServerCatalogFactory_QueryInterface(This, riid, ppvObject) \
    ((This)->lpVtbl->QueryInterface(This, riid, ppvObject))

#define __x_ABI_CWindows_CAI_CModelContextProtocol_CIModelContextProtocolServerCatalogFactory_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))

#define __x_ABI_CWindows_CAI_CModelContextProtocol_CIModelContextProtocolServerCatalogFactory_Release(This) \
    ((This)->lpVtbl->Release(This))

#define __x_ABI_CWindows_CAI_CModelContextProtocol_CIModelContextProtocolServerCatalogFactory_GetIids(This, iidCount, iids) \
    ((This)->lpVtbl->GetIids(This, iidCount, iids))

#define __x_ABI_CWindows_CAI_CModelContextProtocol_CIModelContextProtocolServerCatalogFactory_GetRuntimeClassName(This, className) \
    ((This)->lpVtbl->GetRuntimeClassName(This, className))

#define __x_ABI_CWindows_CAI_CModelContextProtocol_CIModelContextProtocolServerCatalogFactory_GetTrustLevel(This, trustLevel) \
    ((This)->lpVtbl->GetTrustLevel(This, trustLevel))

#endif /* COBJMACROS */

EXTERN_C const IID IID___x_ABI_CWindows_CAI_CModelContextProtocol_CIModelContextProtocolServerCatalogFactory;
#endif /* !defined(____x_ABI_CWindows_CAI_CModelContextProtocol_CIModelContextProtocolServerCatalogFactory_INTERFACE_DEFINED__) */
#endif // WINDOWS_AI_MODELCONTEXTPROTOCOL_MODELCONTEXTPROTOCOLCONTRACT_VERSION >= 0x10000
#endif // defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)

/*
 *
 * Interface Windows.AI.ModelContextProtocol.IModelContextProtocolServerInfo
 *
 * Introduced to Windows.AI.ModelContextProtocol.ModelContextProtocolContract in version 1.0
 *
 * Type is for evaluation purposes and is subject to change or removal in future updates.
 *
 * Interface is a part of the implementation of type Windows.AI.ModelContextProtocol.ModelContextProtocolServerInfo
 *
 */
#if defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
#if WINDOWS_AI_MODELCONTEXTPROTOCOL_MODELCONTEXTPROTOCOLCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CAI_CModelContextProtocol_CIModelContextProtocolServerInfo_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CAI_CModelContextProtocol_CIModelContextProtocolServerInfo_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_AI_ModelContextProtocol_IModelContextProtocolServerInfo[] = L"Windows.AI.ModelContextProtocol.IModelContextProtocolServerInfo";
typedef struct __x_ABI_CWindows_CAI_CModelContextProtocol_CIModelContextProtocolServerInfoVtbl
{
    BEGIN_INTERFACE

    HRESULT (STDMETHODCALLTYPE* QueryInterface)(__x_ABI_CWindows_CAI_CModelContextProtocol_CIModelContextProtocolServerInfo* This,
        REFIID riid,
        void** ppvObject);
    ULONG (STDMETHODCALLTYPE* AddRef)(__x_ABI_CWindows_CAI_CModelContextProtocol_CIModelContextProtocolServerInfo* This);
    ULONG (STDMETHODCALLTYPE* Release)(__x_ABI_CWindows_CAI_CModelContextProtocol_CIModelContextProtocolServerInfo* This);
    HRESULT (STDMETHODCALLTYPE* GetIids)(__x_ABI_CWindows_CAI_CModelContextProtocol_CIModelContextProtocolServerInfo* This,
        ULONG* iidCount,
        IID** iids);
    HRESULT (STDMETHODCALLTYPE* GetRuntimeClassName)(__x_ABI_CWindows_CAI_CModelContextProtocol_CIModelContextProtocolServerInfo* This,
        HSTRING* className);
    HRESULT (STDMETHODCALLTYPE* GetTrustLevel)(__x_ABI_CWindows_CAI_CModelContextProtocol_CIModelContextProtocolServerInfo* This,
        TrustLevel* trustLevel);
    HRESULT (STDMETHODCALLTYPE* get_Id)(__x_ABI_CWindows_CAI_CModelContextProtocol_CIModelContextProtocolServerInfo* This,
        GUID* value);
    HRESULT (STDMETHODCALLTYPE* get_Name)(__x_ABI_CWindows_CAI_CModelContextProtocol_CIModelContextProtocolServerInfo* This,
        HSTRING* value);
    HRESULT (STDMETHODCALLTYPE* get_Description)(__x_ABI_CWindows_CAI_CModelContextProtocol_CIModelContextProtocolServerInfo* This,
        HSTRING* value);
    HRESULT (STDMETHODCALLTYPE* GetPackage)(__x_ABI_CWindows_CAI_CModelContextProtocol_CIModelContextProtocolServerInfo* This,
        __x_ABI_CWindows_CApplicationModel_CIPackage** result);

    END_INTERFACE
} __x_ABI_CWindows_CAI_CModelContextProtocol_CIModelContextProtocolServerInfoVtbl;

interface __x_ABI_CWindows_CAI_CModelContextProtocol_CIModelContextProtocolServerInfo
{
    CONST_VTBL struct __x_ABI_CWindows_CAI_CModelContextProtocol_CIModelContextProtocolServerInfoVtbl* lpVtbl;
};

#ifdef COBJMACROS

#define __x_ABI_CWindows_CAI_CModelContextProtocol_CIModelContextProtocolServerInfo_QueryInterface(This, riid, ppvObject) \
    ((This)->lpVtbl->QueryInterface(This, riid, ppvObject))

#define __x_ABI_CWindows_CAI_CModelContextProtocol_CIModelContextProtocolServerInfo_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))

#define __x_ABI_CWindows_CAI_CModelContextProtocol_CIModelContextProtocolServerInfo_Release(This) \
    ((This)->lpVtbl->Release(This))

#define __x_ABI_CWindows_CAI_CModelContextProtocol_CIModelContextProtocolServerInfo_GetIids(This, iidCount, iids) \
    ((This)->lpVtbl->GetIids(This, iidCount, iids))

#define __x_ABI_CWindows_CAI_CModelContextProtocol_CIModelContextProtocolServerInfo_GetRuntimeClassName(This, className) \
    ((This)->lpVtbl->GetRuntimeClassName(This, className))

#define __x_ABI_CWindows_CAI_CModelContextProtocol_CIModelContextProtocolServerInfo_GetTrustLevel(This, trustLevel) \
    ((This)->lpVtbl->GetTrustLevel(This, trustLevel))

#define __x_ABI_CWindows_CAI_CModelContextProtocol_CIModelContextProtocolServerInfo_get_Id(This, value) \
    ((This)->lpVtbl->get_Id(This, value))

#define __x_ABI_CWindows_CAI_CModelContextProtocol_CIModelContextProtocolServerInfo_get_Name(This, value) \
    ((This)->lpVtbl->get_Name(This, value))

#define __x_ABI_CWindows_CAI_CModelContextProtocol_CIModelContextProtocolServerInfo_get_Description(This, value) \
    ((This)->lpVtbl->get_Description(This, value))

#define __x_ABI_CWindows_CAI_CModelContextProtocol_CIModelContextProtocolServerInfo_GetPackage(This, result) \
    ((This)->lpVtbl->GetPackage(This, result))

#endif /* COBJMACROS */

EXTERN_C const IID IID___x_ABI_CWindows_CAI_CModelContextProtocol_CIModelContextProtocolServerInfo;
#endif /* !defined(____x_ABI_CWindows_CAI_CModelContextProtocol_CIModelContextProtocolServerInfo_INTERFACE_DEFINED__) */
#endif // WINDOWS_AI_MODELCONTEXTPROTOCOL_MODELCONTEXTPROTOCOLCONTRACT_VERSION >= 0x10000
#endif // defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)

/*
 *
 * Interface Windows.AI.ModelContextProtocol.IModelContextProtocolServerInfoFactory
 *
 * Introduced to Windows.AI.ModelContextProtocol.ModelContextProtocolContract in version 1.0
 *
 * Type is for evaluation purposes and is subject to change or removal in future updates.
 *
 * Interface is a part of the implementation of type Windows.AI.ModelContextProtocol.ModelContextProtocolServerInfo
 *
 */
#if defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
#if WINDOWS_AI_MODELCONTEXTPROTOCOL_MODELCONTEXTPROTOCOLCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CAI_CModelContextProtocol_CIModelContextProtocolServerInfoFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CAI_CModelContextProtocol_CIModelContextProtocolServerInfoFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_AI_ModelContextProtocol_IModelContextProtocolServerInfoFactory[] = L"Windows.AI.ModelContextProtocol.IModelContextProtocolServerInfoFactory";
typedef struct __x_ABI_CWindows_CAI_CModelContextProtocol_CIModelContextProtocolServerInfoFactoryVtbl
{
    BEGIN_INTERFACE

    HRESULT (STDMETHODCALLTYPE* QueryInterface)(__x_ABI_CWindows_CAI_CModelContextProtocol_CIModelContextProtocolServerInfoFactory* This,
        REFIID riid,
        void** ppvObject);
    ULONG (STDMETHODCALLTYPE* AddRef)(__x_ABI_CWindows_CAI_CModelContextProtocol_CIModelContextProtocolServerInfoFactory* This);
    ULONG (STDMETHODCALLTYPE* Release)(__x_ABI_CWindows_CAI_CModelContextProtocol_CIModelContextProtocolServerInfoFactory* This);
    HRESULT (STDMETHODCALLTYPE* GetIids)(__x_ABI_CWindows_CAI_CModelContextProtocol_CIModelContextProtocolServerInfoFactory* This,
        ULONG* iidCount,
        IID** iids);
    HRESULT (STDMETHODCALLTYPE* GetRuntimeClassName)(__x_ABI_CWindows_CAI_CModelContextProtocol_CIModelContextProtocolServerInfoFactory* This,
        HSTRING* className);
    HRESULT (STDMETHODCALLTYPE* GetTrustLevel)(__x_ABI_CWindows_CAI_CModelContextProtocol_CIModelContextProtocolServerInfoFactory* This,
        TrustLevel* trustLevel);

    END_INTERFACE
} __x_ABI_CWindows_CAI_CModelContextProtocol_CIModelContextProtocolServerInfoFactoryVtbl;

interface __x_ABI_CWindows_CAI_CModelContextProtocol_CIModelContextProtocolServerInfoFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CAI_CModelContextProtocol_CIModelContextProtocolServerInfoFactoryVtbl* lpVtbl;
};

#ifdef COBJMACROS

#define __x_ABI_CWindows_CAI_CModelContextProtocol_CIModelContextProtocolServerInfoFactory_QueryInterface(This, riid, ppvObject) \
    ((This)->lpVtbl->QueryInterface(This, riid, ppvObject))

#define __x_ABI_CWindows_CAI_CModelContextProtocol_CIModelContextProtocolServerInfoFactory_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))

#define __x_ABI_CWindows_CAI_CModelContextProtocol_CIModelContextProtocolServerInfoFactory_Release(This) \
    ((This)->lpVtbl->Release(This))

#define __x_ABI_CWindows_CAI_CModelContextProtocol_CIModelContextProtocolServerInfoFactory_GetIids(This, iidCount, iids) \
    ((This)->lpVtbl->GetIids(This, iidCount, iids))

#define __x_ABI_CWindows_CAI_CModelContextProtocol_CIModelContextProtocolServerInfoFactory_GetRuntimeClassName(This, className) \
    ((This)->lpVtbl->GetRuntimeClassName(This, className))

#define __x_ABI_CWindows_CAI_CModelContextProtocol_CIModelContextProtocolServerInfoFactory_GetTrustLevel(This, trustLevel) \
    ((This)->lpVtbl->GetTrustLevel(This, trustLevel))

#endif /* COBJMACROS */

EXTERN_C const IID IID___x_ABI_CWindows_CAI_CModelContextProtocol_CIModelContextProtocolServerInfoFactory;
#endif /* !defined(____x_ABI_CWindows_CAI_CModelContextProtocol_CIModelContextProtocolServerInfoFactory_INTERFACE_DEFINED__) */
#endif // WINDOWS_AI_MODELCONTEXTPROTOCOL_MODELCONTEXTPROTOCOLCONTRACT_VERSION >= 0x10000
#endif // defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)

/*
 *
 * Class Windows.AI.ModelContextProtocol.ModelContextProtocolClientContext
 *
 * Introduced to Windows.AI.ModelContextProtocol.ModelContextProtocolContract in version 1.0
 *
 * Type is for evaluation purposes and is subject to change or removal in future updates.
 *
 * Class implements the following interfaces:
 *    Windows.AI.ModelContextProtocol.IModelContextProtocolClientContext ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
#if WINDOWS_AI_MODELCONTEXTPROTOCOL_MODELCONTEXTPROTOCOLCONTRACT_VERSION >= 0x10000
#ifndef RUNTIMECLASS_Windows_AI_ModelContextProtocol_ModelContextProtocolClientContext_DEFINED
#define RUNTIMECLASS_Windows_AI_ModelContextProtocol_ModelContextProtocolClientContext_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_AI_ModelContextProtocol_ModelContextProtocolClientContext[] = L"Windows.AI.ModelContextProtocol.ModelContextProtocolClientContext";
#endif
#endif // WINDOWS_AI_MODELCONTEXTPROTOCOL_MODELCONTEXTPROTOCOLCONTRACT_VERSION >= 0x10000
#endif // defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)

/*
 *
 * Class Windows.AI.ModelContextProtocol.ModelContextProtocolServerCatalog
 *
 * Introduced to Windows.AI.ModelContextProtocol.ModelContextProtocolContract in version 1.0
 *
 * Type is for evaluation purposes and is subject to change or removal in future updates.
 *
 * Class implements the following interfaces:
 *    Windows.AI.ModelContextProtocol.IModelContextProtocolServerCatalog ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
#if WINDOWS_AI_MODELCONTEXTPROTOCOL_MODELCONTEXTPROTOCOLCONTRACT_VERSION >= 0x10000
#ifndef RUNTIMECLASS_Windows_AI_ModelContextProtocol_ModelContextProtocolServerCatalog_DEFINED
#define RUNTIMECLASS_Windows_AI_ModelContextProtocol_ModelContextProtocolServerCatalog_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_AI_ModelContextProtocol_ModelContextProtocolServerCatalog[] = L"Windows.AI.ModelContextProtocol.ModelContextProtocolServerCatalog";
#endif
#endif // WINDOWS_AI_MODELCONTEXTPROTOCOL_MODELCONTEXTPROTOCOLCONTRACT_VERSION >= 0x10000
#endif // defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)

/*
 *
 * Class Windows.AI.ModelContextProtocol.ModelContextProtocolServerInfo
 *
 * Introduced to Windows.AI.ModelContextProtocol.ModelContextProtocolContract in version 1.0
 *
 * Type is for evaluation purposes and is subject to change or removal in future updates.
 *
 * Class implements the following interfaces:
 *    Windows.AI.ModelContextProtocol.IModelContextProtocolServerInfo ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
#if WINDOWS_AI_MODELCONTEXTPROTOCOL_MODELCONTEXTPROTOCOLCONTRACT_VERSION >= 0x10000
#ifndef RUNTIMECLASS_Windows_AI_ModelContextProtocol_ModelContextProtocolServerInfo_DEFINED
#define RUNTIMECLASS_Windows_AI_ModelContextProtocol_ModelContextProtocolServerInfo_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_AI_ModelContextProtocol_ModelContextProtocolServerInfo[] = L"Windows.AI.ModelContextProtocol.ModelContextProtocolServerInfo";
#endif
#endif // WINDOWS_AI_MODELCONTEXTPROTOCOL_MODELCONTEXTPROTOCOLCONTRACT_VERSION >= 0x10000
#endif // defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)

#endif // defined(__cplusplus)
#pragma pop_macro("MIDL_CONST_ID")
// Restore the original value of the 'DEPRECATED' macro
#pragma pop_macro("DEPRECATED")

#ifdef __clang__
#pragma clang diagnostic pop // deprecated-declarations
#else
#pragma warning(pop)
#endif
#endif // __windows2Eai2Emodelcontextprotocol_p_h__

#endif // __windows2Eai2Emodelcontextprotocol_h__
