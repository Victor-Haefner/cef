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
// $hash=b1ca103dfbfa17ce040d0d178163d102951aaa61$
//

#ifndef CEF_LIBCEF_DLL_CPPTOC_CONTEXT_MENU_PARAMS_CPPTOC_H_
#define CEF_LIBCEF_DLL_CPPTOC_CONTEXT_MENU_PARAMS_CPPTOC_H_
#pragma once

#if !defined(BUILDING_CEF_SHARED)
#error This file can be included DLL-side only
#endif

#include "include/capi/cef_context_menu_handler_capi.h"
#include "include/cef_context_menu_handler.h"
#include "libcef_dll/cpptoc/cpptoc_ref_counted.h"

// Wrap a C++ class with a C structure.
// This class may be instantiated and accessed DLL-side only.
class CefContextMenuParamsCppToC
    : public CefCppToCRefCounted<CefContextMenuParamsCppToC,
                                 CefContextMenuParams,
                                 cef_context_menu_params_t> {
 public:
  CefContextMenuParamsCppToC();
  virtual ~CefContextMenuParamsCppToC();
};

#endif  // CEF_LIBCEF_DLL_CPPTOC_CONTEXT_MENU_PARAMS_CPPTOC_H_
