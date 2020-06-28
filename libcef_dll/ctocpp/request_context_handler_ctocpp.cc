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
// $hash=afc36702ea14f7e553999aad62155a4bd189b3b4$
//

#include "libcef_dll/ctocpp/request_context_handler_ctocpp.h"
#include "libcef_dll/cpptoc/browser_cpptoc.h"
#include "libcef_dll/cpptoc/frame_cpptoc.h"
#include "libcef_dll/cpptoc/request_context_cpptoc.h"
#include "libcef_dll/cpptoc/request_cpptoc.h"
#include "libcef_dll/cpptoc/web_plugin_info_cpptoc.h"
#include "libcef_dll/ctocpp/resource_request_handler_ctocpp.h"

// VIRTUAL METHODS - Body may be edited by hand.

NO_SANITIZE("cfi-icall")
void CefRequestContextHandlerCToCpp::OnRequestContextInitialized(
    CefRefPtr<CefRequestContext> request_context) {
  cef_request_context_handler_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, on_request_context_initialized))
    return;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Verify param: request_context; type: refptr_diff
  DCHECK(request_context.get());
  if (!request_context.get())
    return;

  // Execute
  _struct->on_request_context_initialized(
      _struct, CefRequestContextCppToC::Wrap(request_context));
}

NO_SANITIZE("cfi-icall")
bool CefRequestContextHandlerCToCpp::OnBeforePluginLoad(
    const CefString& mime_type,
    const CefString& plugin_url,
    bool is_main_frame,
    const CefString& top_origin_url,
    CefRefPtr<CefWebPluginInfo> plugin_info,
    PluginPolicy* plugin_policy) {
  cef_request_context_handler_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, on_before_plugin_load))
    return false;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Verify param: mime_type; type: string_byref_const
  DCHECK(!mime_type.empty());
  if (mime_type.empty())
    return false;
  // Verify param: plugin_info; type: refptr_diff
  DCHECK(plugin_info.get());
  if (!plugin_info.get())
    return false;
  // Verify param: plugin_policy; type: simple_byaddr
  DCHECK(plugin_policy);
  if (!plugin_policy)
    return false;
  // Unverified params: plugin_url, top_origin_url

  // Execute
  int _retval = _struct->on_before_plugin_load(
      _struct, mime_type.GetStruct(), plugin_url.GetStruct(), is_main_frame,
      top_origin_url.GetStruct(), CefWebPluginInfoCppToC::Wrap(plugin_info),
      plugin_policy);

  // Return type: bool
  return _retval ? true : false;
}

NO_SANITIZE("cfi-icall")
CefRefPtr<CefResourceRequestHandler>
CefRequestContextHandlerCToCpp::GetResourceRequestHandler(
    CefRefPtr<CefBrowser> browser,
    CefRefPtr<CefFrame> frame,
    CefRefPtr<CefRequest> request,
    bool is_navigation,
    bool is_download,
    const CefString& request_initiator,
    bool& disable_default_handling) {
  cef_request_context_handler_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, get_resource_request_handler))
    return nullptr;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Verify param: request; type: refptr_diff
  DCHECK(request.get());
  if (!request.get())
    return nullptr;
  // Unverified params: browser, frame, request_initiator

  // Translate param: disable_default_handling; type: bool_byref
  int disable_default_handlingInt = disable_default_handling;

  // Execute
  cef_resource_request_handler_t* _retval =
      _struct->get_resource_request_handler(
          _struct, CefBrowserCppToC::Wrap(browser), CefFrameCppToC::Wrap(frame),
          CefRequestCppToC::Wrap(request), is_navigation, is_download,
          request_initiator.GetStruct(), &disable_default_handlingInt);

  // Restore param:disable_default_handling; type: bool_byref
  disable_default_handling = disable_default_handlingInt ? true : false;

  // Return type: refptr_same
  return CefResourceRequestHandlerCToCpp::Wrap(_retval);
}

// CONSTRUCTOR - Do not edit by hand.

CefRequestContextHandlerCToCpp::CefRequestContextHandlerCToCpp() {}

// DESTRUCTOR - Do not edit by hand.

CefRequestContextHandlerCToCpp::~CefRequestContextHandlerCToCpp() {}

template <>
cef_request_context_handler_t* CefCToCppRefCounted<
    CefRequestContextHandlerCToCpp,
    CefRequestContextHandler,
    cef_request_context_handler_t>::UnwrapDerived(CefWrapperType type,
                                                  CefRequestContextHandler* c) {
  NOTREACHED() << "Unexpected class type: " << type;
  return nullptr;
}

template <>
CefWrapperType
    CefCToCppRefCounted<CefRequestContextHandlerCToCpp,
                        CefRequestContextHandler,
                        cef_request_context_handler_t>::kWrapperType =
        WT_REQUEST_CONTEXT_HANDLER;
