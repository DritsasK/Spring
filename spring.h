#ifndef SPRING_HPP
#define SPRING_HPP

#include <iostream>
#include "material.h"
#include "shape_type.h"
#include "load_force_type.h"

namespace spring {
    
   
    material::eng_property<> music_wire_ASTM_A_228(7861.09293764*boost::units::si::kilogrammes_per_cubic_metre,
    2.16495379e+12*boost::units::si::pascal,2.06842719e+11*boost::units::si::pascal,82047.61*boost::units::si::pascal,
    121.11*boost::units::si::kelvin);
   
    
    
}

#endif
