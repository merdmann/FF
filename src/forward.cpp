//============================================================================
// Name        : forward.cpp
// Author      : Michael Erdmann
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>

#include "IAppContext.h"
#include "ContextFactory.h"
#include "IComponent.h"
#include "MyComponent.h"

const std::string COMPONENT_TYPE_ID = "Hallo";

int main() {
	app::MyComponent myComponent;		// this is _my_ component
	app::ContextFactory factory;
	app::IAppContext* ctx ;

	// registering a component which is exepcted to work on it execution context.
	app::Register(COMPONENT_TYPE_ID,&myComponent);

	// create a new execution context and run it (myComponent).
	ctx = (app::IAppContext*) factory.createContext(COMPONENT_TYPE_ID);
	bool result = ctx->run();

	return 0;
}
