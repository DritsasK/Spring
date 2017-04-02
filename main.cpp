#include "spring.h"
#include "utility.h"
#include <type_traits>

#include <iostream>

void test() { 
    util::alg_load(loadforce::variable_load());
    util::alg_load(loadforce::constant_load());
    util::alg_load(loadforce::torsion_load());

    auto load1=loadforce::torsion_load();
    
    util::alg_load(load1);
    
    auto shape1=shape::coil_spring();
    auto shape2=shape::flat_spring();
    
    util::alg_shape_type(shape::serpentine_spring());
    
    util::alg_shape_type(shape1);
    util::alg_shape_type(shape2);
    
   
    
    util::make_calculation(loadforce::variable_load(), shape::flat_spring(),spring::music_wire_ASTM_A_228);
}

int main()
{
    test();   

    
    return 0;
}
