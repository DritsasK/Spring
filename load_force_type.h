#ifndef LOAD_FORCE_TYPE_HPP
#define LOAD_FORCE_TYPE_HPP

namespace loadforce {
    
   template<typename T> struct load_force { 
       static constexpr T type() { return T{}; }
   };

   struct tension_load : public load_force<tension_load> { 
       constexpr tension_load() { }
   };

   struct compression_load : public load_force<compression_load> { 
       constexpr compression_load() { }
   };

   struct constant_load : public load_force<constant_load> { 
       constexpr constant_load() { }
   };

   struct variable_load : public load_force<variable_load> { 
       constexpr variable_load() { }
   };

   struct torsion_load : public load_force<torsion_load> { 
       constexpr torsion_load() { }
   };

}

#endif