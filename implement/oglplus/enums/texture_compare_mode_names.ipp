//  File implement/oglplus/enums/texture_compare_mode_names.ipp
//
//  Automatically generated file, DO NOT modify manually.
//  Edit the source 'source/enums/oglplus/texture_compare_mode.txt'
//  or the 'source/enums/make_enum.py' script instead.
//
//  Copyright 2010-2017 Matus Chochlik.
//  Distributed under the Boost Software License, Version 1.0.
//  See accompanying file LICENSE_1_0.txt or copy at
//  http://www.boost.org/LICENSE_1_0.txt
//
namespace enums {
OGLPLUS_LIB_FUNC StrCRef ValueName_(
	TextureCompareMode*,
	GLenum value
)
#if (!OGLPLUS_LINK_LIBRARY || defined(OGLPLUS_IMPLEMENTING_LIBRARY)) && \
	!defined(OGLPLUS_IMPL_EVN_TEXTURECOMPAREMODE)
#define OGLPLUS_IMPL_EVN_TEXTURECOMPAREMODE
{
switch(value)
{
#if defined GL_NONE
	case GL_NONE: return StrCRef("NONE");
#endif
#if defined GL_COMPARE_REF_TO_TEXTURE
	case GL_COMPARE_REF_TO_TEXTURE: return StrCRef("COMPARE_REF_TO_TEXTURE");
#endif
	default:;
}
OGLPLUS_FAKE_USE(value);
return StrCRef();
}
#else
;
#endif
} // namespace enums

