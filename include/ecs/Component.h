/**
 * @file    Component.h
 * @brief   A Component keep the data for one aspect of an Entity.
 *
 * Copyright (c) 2014 Sebastien Rombauts (sebastien.rombauts@gmail.com)
 *
 * Distributed under the MIT License (MIT) (See accompanying file LICENSE.txt
 * or copy at http://opensource.org/licenses/MIT)
 */
#pragma once

namespace ecs {


/**
 * @brief A ComponentType is a positive ID referencing a game object.
 */
typedef unsigned int ComponentType;

/// ComponentType are strictly positive IDs.
static const ComponentType _invalidComponentType = 0;


/**
 * @brief A Component keep the data for one aspect of an Entity.
 *
 * Every Component class must derived from this struct and define its own/unique positive ComponentType.
 */
struct Component {

    /// Default invalid component type
    static const ComponentType _mType = _invalidComponentType;
};


} // namespace ecs
