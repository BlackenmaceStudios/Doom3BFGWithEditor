// gl_RenderContext.cpp
//

#pragma hdrstop
#include "../../idlib/precompiled.h"

#include "../tr_local.h"
#include "../RenderContext.h"


idRenderContext rRenderContext;

/*
==================
idRenderContext::InitContext
==================
*/
void idRenderContext::InitContext( HDC hdc, HGLRC hGLRC ) {
	this->hGLRC = hGLRC;
	this->hdc = hdc;
}

/*
==================
idRenderContext::MakeCurrent
==================
*/
void idRenderContext::MakeCurrent( void ) {
	qwglMakeCurrent( hdc, hGLRC );
}

/*
==================
idRenderContext::Disable
==================
*/
void idRenderContext::Disable( void ) {
	qwglMakeCurrent( NULL, NULL );
}