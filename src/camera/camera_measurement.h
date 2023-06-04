#ifndef _SENSOR_MODEL_CAMERA_MEASUREMENT_H_
#define _SENSOR_MODEL_CAMERA_MEASUREMENT_H_

#include "datatype_basic.h"

namespace SENSOR_MODEL {

/* Measurement of camera. */
struct CameraMeasurement {
    MatImg image = MatImg::Zero(1, 1);
    float time_stamp_s = 0.0f;
};

}

#endif // end of _SENSOR_MODEL_CAMERA_MEASUREMENT_H_
