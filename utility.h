#ifndef UTILITY_HPP
#define UTILITY_HPP
#include "spring.h"

namespace util {



 template <class T> void constexpr alg_load(T, loadforce::tension_load)
    {
        std::cout << "alg_load() called for loadforce::tension_load\n";
    }

    template <class T> void constexpr alg_load(T, loadforce::compression_load)
    {
        std::cout << "alg_load() called for loadforce::compression_load\n";
    }

    template <class T> void constexpr alg_load(T, loadforce::constant_load)
    {
        std::cout << "alg_load() called for loadforce::constant_load\n";
    }

    template <class T> void constexpr alg_load(T, loadforce::variable_load)
    {
        std::cout << "alg_load() called for loadforce::variable_load\n";
    }

    template <class T> void constexpr alg_load(T, loadforce::torsion_load)
    {
        std::cout << "alg_load() called for loadforce::torsion_load\n";
    }

    template <class T> void constexpr alg_load(T e)   
    {
        alg_load(e, loadforce::load_force<T>::type());
    }
    
    template <class T> void constexpr alg_shape_type(T, shape::coil_spring)
    {
        std::cout << "alg_shape_type() called for shape::coil_spring\n";
    }
    
    template <class T> void constexpr alg_shape_type(T, shape::flat_spring)
    {
        std::cout << "alg_shape_type() called for shape::flat_spring\n";
    }
    
    template <class T> void constexpr alg_shape_type(T, shape::machined_spring)
    {
        std::cout << "alg_shape_type() called for shape::machined_spring\n";
    }
    
    template <class T> void constexpr alg_shape_type(T, shape::serpentine_spring)
    {
        std::cout << "alg_shape_type() called for shape::serpentine_spring\n";
    }
    
    template <class T> void constexpr alg_shape_type(T e)   
    {
        alg_shape_type(e, shape::shape_type<T>::type());
    }
    
    template<class LT, class ST> void make_calculation(LT a, ST b,const material::eng_property<>& c) 
{
    alg_load(a);
    alg_shape_type(b);
}

}



#endif