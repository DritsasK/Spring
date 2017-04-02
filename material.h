#ifndef MATERIAL_HPP
#define MATERIAL_HPP

#include <iomanip>
#include <boost/units/systems/si/mass.hpp>
#include <boost/units/systems/si/mass_density.hpp>
#include <boost/units/systems/si/volume.hpp>
#include <boost/units/systems/si/io.hpp>
#include <boost/units/base_units/metric/bar.hpp>
#include <boost/units/systems/temperature/celsius.hpp>
#include <boost/units/systems/si.hpp>

namespace material {
    
    template <class _mass_density = boost::units::quantity<boost::units::si::mass_density>,
              class _minimum_tenstile_strength = boost::units::quantity<boost::units::si::pressure>,
              class _modulus_elasticity = boost::units::quantity<boost::units::si::pressure>,
              class _modulus_torsion = boost::units::quantity<boost::units::si::pressure>,
              class _maximum_operating_temperature = boost::units::quantity<boost::units::si::temperature> >
    struct eng_property {
    
    using mass_density = _mass_density;
    using minimum_tenstile_strength = _minimum_tenstile_strength;
    using modulus_elasticity = _modulus_elasticity;
    using modulus_torsion = _modulus_torsion;
    using maximum_operating_temperature = _maximum_operating_temperature;
    
    mass_density _md;
    minimum_tenstile_strength _mts;
    modulus_elasticity _me;
    modulus_torsion _mt;
    maximum_operating_temperature _mot;
    
    
    constexpr eng_property(mass_density md, //constructor
    minimum_tenstile_strength mts, 
    modulus_elasticity me, 
    modulus_torsion mt, 
    maximum_operating_temperature mot)  { }
    
    constexpr eng_property() { }           //constructor
    
    };
    
}


#endif