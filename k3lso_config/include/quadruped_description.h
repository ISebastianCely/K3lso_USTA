#ifndef QUADRUPED_DESCRIPTION_H
#define QUADRUPED_DESCRIPTION_H

#include <quadruped_base/quadruped_base.h>

namespace champ
{
    namespace URDF
    {
        void loadFromHeader(champ::QuadrupedBase &base)
        {
      base.lf.hip.setOrigin(0.258, 0.0483200000000001, -0.0115000000000004, 0.0, 0.0, 0.0);
base.lf.upper_leg.setOrigin(0.0, 0.10214, -0.0, 0.0, 0.0, 0.0);
base.lf.lower_leg.setOrigin(0.0161607423810583, -0.000530000000205255, -0.228483810585453, 0.0, 0.0, 0.0);
     base.lf.foot.setOrigin(0.0338665592030153, 0.000299999999809231, -0.226407593335961, 0.0, 0.0, 0.0);

      base.rf.hip.setOrigin(0.257999999999997, -0.0483199999999994, -0.0114999999999963, 0.0, 0.0, 0.0);
base.rf.upper_leg.setOrigin(0.0, -0.10214, -0.0, 0.0, 0.0, 0.0);
base.rf.lower_leg.setOrigin(0.0161607423810464, 0.000529999999999919, -0.228483810585452, 0.0, 0.0, 0.0);
     base.rf.foot.setOrigin(0.0338546104547882, -0.000299999999976874, -0.226407593335965, 0.0, 0.0, 0.0);

      base.lh.hip.setOrigin(-0.258, 0.04832, -0.0115, 0.0, 0.0, 0.0);
base.lh.upper_leg.setOrigin(0.0, 0.102139998504721, -0.0, 0.0, 0.0, 0.0);
base.lh.lower_leg.setOrigin(0.0161607423810425, -0.000529999999999919, -0.228483810585461, 0.0, 0.0, 0.0);
     base.lh.foot.setOrigin(0.0338665592030865, 0.000300000000012207, -0.226407593335961, 0.0, 0.0, 0.0);

      base.rh.hip.setOrigin(-0.258000000000003, -0.0483199999999995, -0.0114999999999966, 0.0, 0.0, 0.0);
base.rh.upper_leg.setOrigin(0.0, -0.0898, -0.0, 0.0, 0.0, 0.0);
base.rh.lower_leg.setOrigin(0.0161607423810436, -0.0118099985047229, -0.228483810585451, 0.0, 0.0, 0.0);
     base.rh.foot.setOrigin(0.0338546104547864, -0.000299999999976319, -0.226407593335969, 0.0, 0.0, 0.0);
        }
    }
}
#endif