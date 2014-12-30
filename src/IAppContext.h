/*
 * Copyright (C) 2014 Michael Erdmann <michael.erdmann@snafu.de>
 * 
 * IAppContext.h is part of forward.
 *
 * forward is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * forward is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with forward. If not, see <http://www.gnu.org/licenses/>.
 *
 *  Created on: Dec 30, 2014
 *      Author: MIchael
 */

#ifndef IAPPCONTEXT_H_
#define IAPPCONTEXT_H_

#include "IComponent.h"

namespace app {

class ContextFactory;

class IAppContext {

private:
	ContextFactory* factory_;
	IComponent* component_;

public:
	IAppContext(ContextFactory*);
	virtual ~IAppContext();

	void setComponent(IComponent* component);
	bool run();
};

} /* namespace adventure */

#endif /* IAPPCONTEXT_H_ */
