#ifndef SHAPE_HPP
#define SHAPE_HPP

namespace shape
{
    
    template<typename T> struct shape_type { 
       static constexpr T type() { return T{}; }
   };

    struct coil_spring : public shape_type<coil_spring> { 
        constexpr coil_spring() { }
    };

    struct flat_spring : public shape_type<flat_spring> { 
        constexpr flat_spring() { }
    };

    struct machined_spring : public shape_type<machined_spring> { 
        constexpr machined_spring() { }
    };

    struct serpentine_spring : public shape_type<serpentine_spring> { 
        constexpr serpentine_spring() { }
    };

}

#endif