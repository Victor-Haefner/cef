// Copyright (c) 2020 The Chromium Embedded Framework Authors. All rights
// reserved. Use of this source code is governed by a BSD-style license that
// can be found in the LICENSE file.
//
// ---------------------------------------------------------------------------
//
// This file was generated by the CEF translator tool. If making changes by
// hand only do so within the body of existing method and function
// implementations. See the translator.README.txt file in the tools directory
// for more information.
//
// $hash=becfb6e4e0d47746f10295fa4843c9baebc786b5$
//

#include "libcef_dll/cpptoc/response_cpptoc.h"
#include "libcef_dll/transfer_util.h"

// GLOBAL FUNCTIONS - Body may be edited by hand.

CEF_EXPORT cef_response_t* cef_response_create() {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  CefRefPtr<CefResponse> _retval = CefResponse::Create();

  // Return type: refptr_same
  return CefResponseCppToC::Wrap(_retval);
}

namespace {

// MEMBER FUNCTIONS - Body may be edited by hand.

int CEF_CALLBACK response_is_read_only(struct _cef_response_t* self) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return 0;

  // Execute
  bool _retval = CefResponseCppToC::Get(self)->IsReadOnly();

  // Return type: bool
  return _retval;
}

cef_errorcode_t CEF_CALLBACK response_get_error(struct _cef_response_t* self) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return ERR_NONE;

  // Execute
  cef_errorcode_t _retval = CefResponseCppToC::Get(self)->GetError();

  // Return type: simple
  return _retval;
}

void CEF_CALLBACK response_set_error(struct _cef_response_t* self,
                                     cef_errorcode_t error) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return;

  // Execute
  CefResponseCppToC::Get(self)->SetError(error);
}

int CEF_CALLBACK response_get_status(struct _cef_response_t* self) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return 0;

  // Execute
  int _retval = CefResponseCppToC::Get(self)->GetStatus();

  // Return type: simple
  return _retval;
}

void CEF_CALLBACK response_set_status(struct _cef_response_t* self,
                                      int status) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return;

  // Execute
  CefResponseCppToC::Get(self)->SetStatus(status);
}

cef_string_userfree_t CEF_CALLBACK
response_get_status_text(struct _cef_response_t* self) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return NULL;

  // Execute
  CefString _retval = CefResponseCppToC::Get(self)->GetStatusText();

  // Return type: string
  return _retval.DetachToUserFree();
}

void CEF_CALLBACK response_set_status_text(struct _cef_response_t* self,
                                           const cef_string_t* statusText) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return;
  // Unverified params: statusText

  // Execute
  CefResponseCppToC::Get(self)->SetStatusText(CefString(statusText));
}

cef_string_userfree_t CEF_CALLBACK
response_get_mime_type(struct _cef_response_t* self) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return NULL;

  // Execute
  CefString _retval = CefResponseCppToC::Get(self)->GetMimeType();

  // Return type: string
  return _retval.DetachToUserFree();
}

void CEF_CALLBACK response_set_mime_type(struct _cef_response_t* self,
                                         const cef_string_t* mimeType) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return;
  // Unverified params: mimeType

  // Execute
  CefResponseCppToC::Get(self)->SetMimeType(CefString(mimeType));
}

cef_string_userfree_t CEF_CALLBACK
response_get_charset(struct _cef_response_t* self) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return NULL;

  // Execute
  CefString _retval = CefResponseCppToC::Get(self)->GetCharset();

  // Return type: string
  return _retval.DetachToUserFree();
}

void CEF_CALLBACK response_set_charset(struct _cef_response_t* self,
                                       const cef_string_t* charset) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return;
  // Unverified params: charset

  // Execute
  CefResponseCppToC::Get(self)->SetCharset(CefString(charset));
}

cef_string_userfree_t CEF_CALLBACK
response_get_header_by_name(struct _cef_response_t* self,
                            const cef_string_t* name) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return NULL;
  // Verify param: name; type: string_byref_const
  DCHECK(name);
  if (!name)
    return NULL;

  // Execute
  CefString _retval =
      CefResponseCppToC::Get(self)->GetHeaderByName(CefString(name));

  // Return type: string
  return _retval.DetachToUserFree();
}

void CEF_CALLBACK response_set_header_by_name(struct _cef_response_t* self,
                                              const cef_string_t* name,
                                              const cef_string_t* value,
                                              int overwrite) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return;
  // Verify param: name; type: string_byref_const
  DCHECK(name);
  if (!name)
    return;
  // Unverified params: value

  // Execute
  CefResponseCppToC::Get(self)->SetHeaderByName(
      CefString(name), CefString(value), overwrite ? true : false);
}

void CEF_CALLBACK response_get_header_map(struct _cef_response_t* self,
                                          cef_string_multimap_t headerMap) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return;
  // Verify param: headerMap; type: string_map_multi_byref
  DCHECK(headerMap);
  if (!headerMap)
    return;

  // Translate param: headerMap; type: string_map_multi_byref
  std::multimap<CefString, CefString> headerMapMultimap;
  transfer_string_multimap_contents(headerMap, headerMapMultimap);

  // Execute
  CefResponseCppToC::Get(self)->GetHeaderMap(headerMapMultimap);

  // Restore param: headerMap; type: string_map_multi_byref
  cef_string_multimap_clear(headerMap);
  transfer_string_multimap_contents(headerMapMultimap, headerMap);
}

void CEF_CALLBACK response_set_header_map(struct _cef_response_t* self,
                                          cef_string_multimap_t headerMap) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return;
  // Verify param: headerMap; type: string_map_multi_byref_const
  DCHECK(headerMap);
  if (!headerMap)
    return;

  // Translate param: headerMap; type: string_map_multi_byref_const
  std::multimap<CefString, CefString> headerMapMultimap;
  transfer_string_multimap_contents(headerMap, headerMapMultimap);

  // Execute
  CefResponseCppToC::Get(self)->SetHeaderMap(headerMapMultimap);
}

cef_string_userfree_t CEF_CALLBACK
response_get_url(struct _cef_response_t* self) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return NULL;

  // Execute
  CefString _retval = CefResponseCppToC::Get(self)->GetURL();

  // Return type: string
  return _retval.DetachToUserFree();
}

void CEF_CALLBACK response_set_url(struct _cef_response_t* self,
                                   const cef_string_t* url) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return;
  // Unverified params: url

  // Execute
  CefResponseCppToC::Get(self)->SetURL(CefString(url));
}

}  // namespace

// CONSTRUCTOR - Do not edit by hand.

CefResponseCppToC::CefResponseCppToC() {
  GetStruct()->is_read_only = response_is_read_only;
  GetStruct()->get_error = response_get_error;
  GetStruct()->set_error = response_set_error;
  GetStruct()->get_status = response_get_status;
  GetStruct()->set_status = response_set_status;
  GetStruct()->get_status_text = response_get_status_text;
  GetStruct()->set_status_text = response_set_status_text;
  GetStruct()->get_mime_type = response_get_mime_type;
  GetStruct()->set_mime_type = response_set_mime_type;
  GetStruct()->get_charset = response_get_charset;
  GetStruct()->set_charset = response_set_charset;
  GetStruct()->get_header_by_name = response_get_header_by_name;
  GetStruct()->set_header_by_name = response_set_header_by_name;
  GetStruct()->get_header_map = response_get_header_map;
  GetStruct()->set_header_map = response_set_header_map;
  GetStruct()->get_url = response_get_url;
  GetStruct()->set_url = response_set_url;
}

// DESTRUCTOR - Do not edit by hand.

CefResponseCppToC::~CefResponseCppToC() {}

template <>
CefRefPtr<CefResponse>
CefCppToCRefCounted<CefResponseCppToC, CefResponse, cef_response_t>::
    UnwrapDerived(CefWrapperType type, cef_response_t* s) {
  NOTREACHED() << "Unexpected class type: " << type;
  return nullptr;
}

template <>
CefWrapperType CefCppToCRefCounted<CefResponseCppToC,
                                   CefResponse,
                                   cef_response_t>::kWrapperType = WT_RESPONSE;
