/*
 * This file is part of RaidFinder
 * Copyright (C) 2019-2020 by Admiral_Fish
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * as published by the Free Software Foundation; either version 3
 * of the License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301, USA.
 */

#include "Raid.hpp"
#include <Core/Loader/PersonalLoader.hpp>

Raid::Raid(u8 ability, u8 altform, u8 ivCount, u8 gender, bool gigantamax, u16 species, const bool star[], u8 shinyType) :
    ability(ability),
    altform(altform),
    ivCount(ivCount),
    gender(gender),
    gigantamax(gigantamax),
    species(species),
    shinyType(shinyType)
{
    genderRatio = PersonalLoader::getInfo(species, altform).getGenderRatio();
    for (u8 i = 0; i < 5; i++)
    {
        this->star[i] = star[i];
    }
}

u8 Raid::getAbility() const
{
    return ability;
}

u8 Raid::getAltForm() const
{
    return altform;
}

u8 Raid::getIVCount() const
{
    return ivCount;
}

u8 Raid::getGender() const
{
    return gender;
}

u8 Raid::getGenderRatio() const
{
    return genderRatio;
}

bool Raid::getGigantamax() const
{
    return gigantamax;
}

u16 Raid::getSpecies() const
{
    return species;
}

bool Raid::getStar(u8 index) const
{
    return star[index];
}

u8 Raid::getShiny() const
{
    return shinyType;
}
