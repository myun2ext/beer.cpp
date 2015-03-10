#ifndef __MYUN2__BEER_FACTORY_HPP__
#define __MYUN2__BEER_FACTORY_HPP__

#include "beer.h"

struct beer_factory {
	beer brew(){ return beer(); }
};

#endif//__MYUN2__BEER_FACTORY_HPP__
