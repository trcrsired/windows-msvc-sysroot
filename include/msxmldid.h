//*********************************************************************
//*                  Microsoft Windows                               **
//*            Copyright(c) Microsoft Corp., 1996-1999               **
//*********************************************************************

#ifndef __MSXMLDID_H__
#define __MSXMLDID_H__

#include <winapifamily.h>

#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)

#define DISPID_XOBJ_MIN                 0x00010000
#define DISPID_XOBJ_MAX                 0x0001FFFF
#define DISPID_XOBJ_BASE                DISPID_XOBJ_MIN


#define DISPID_XMLELEMENTCOLLECTION             DISPID_XOBJ_BASE

#define DISPID_XMLELEMENTCOLLECTION_LENGTH     DISPID_XMLELEMENTCOLLECTION + 1
#define DISPID_XMLELEMENTCOLLECTION_NEWENUM     DISPID_NEWENUM
#define DISPID_XMLELEMENTCOLLECTION_ITEM        DISPID_XMLELEMENTCOLLECTION + 3


#define DISPID_XMLDOCUMENT                      DISPID_XMLELEMENTCOLLECTION + 100

#define DISPID_XMLDOCUMENT_ROOT                 DISPID_XMLDOCUMENT + 1
#define DISPID_XMLDOCUMENT_FILESIZE             DISPID_XMLDOCUMENT + 2
#define DISPID_XMLDOCUMENT_FILEMODIFIEDDATE     DISPID_XMLDOCUMENT + 3
#define DISPID_XMLDOCUMENT_FILEUPDATEDDATE      DISPID_XMLDOCUMENT + 4
#define DISPID_XMLDOCUMENT_URL                  DISPID_XMLDOCUMENT + 5
#define DISPID_XMLDOCUMENT_MIMETYPE             DISPID_XMLDOCUMENT + 6
#define DISPID_XMLDOCUMENT_READYSTATE           DISPID_XMLDOCUMENT + 7
#define DISPID_XMLDOCUMENT_CREATEELEMENT        DISPID_XMLDOCUMENT + 8
#define DISPID_XMLDOCUMENT_CHARSET              DISPID_XMLDOCUMENT + 9
#define DISPID_XMLDOCUMENT_VERSION              DISPID_XMLDOCUMENT + 10
#define DISPID_XMLDOCUMENT_DOCTYPE              DISPID_XMLDOCUMENT + 11
#define DISPID_XMLDOCUMENT_DTDURL               DISPID_XMLDOCUMENT + 12
#define DISPID_XMLDOCUMENT_ASYNC                DISPID_XMLDOCUMENT + 13
#define DISPID_XMLDOCUMENT_CASEINSENSITIVE      DISPID_XMLDOCUMENT + 14

#define DISPID_XMLELEMENT                       DISPID_XMLDOCUMENT + 100

#define DISPID_XMLELEMENT_TAGNAME               DISPID_XMLELEMENT + 1
#define DISPID_XMLELEMENT_PARENT                DISPID_XMLELEMENT + 2
#define DISPID_XMLELEMENT_SETATTRIBUTE          DISPID_XMLELEMENT + 3
#define DISPID_XMLELEMENT_GETATTRIBUTE          DISPID_XMLELEMENT + 4
#define DISPID_XMLELEMENT_REMOVEATTRIBUTE       DISPID_XMLELEMENT + 5
#define DISPID_XMLELEMENT_CHILDREN              DISPID_XMLELEMENT + 6
#define DISPID_XMLELEMENT_TYPE                  DISPID_XMLELEMENT + 7
#define DISPID_XMLELEMENT_TEXT                  DISPID_XMLELEMENT + 8
#define DISPID_XMLELEMENT_ADDCHILD              DISPID_XMLELEMENT + 9
#define DISPID_XMLELEMENT_REMOVECHILD           DISPID_XMLELEMENT + 10
#define DISPID_XMLELEMENT_ATTRIBUTES            DISPID_XMLELEMENT + 11

#define DISPID_XMLNOTIFSINK                     DISPID_XMLELEMENT + 100

#define DISPID_XMLNOTIFSINK_CHILDADDED          DISPID_XMLNOTIFSINK + 1

#define DISPID_XMLATTRIBUTE                     DISPID_XMLNOTIFSINK + 100

#define DISPID_XMLATTRIBUTE_NAME                DISPID_XMLATTRIBUTE + 1
#define DISPID_XMLATTRIBUTE_VALUE               DISPID_XMLATTRIBUTE + 2


#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP) */
#pragma endregion

#endif // __MSXMLDID_H__