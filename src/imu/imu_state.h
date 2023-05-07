#ifndef _SENSOR_MODEL_IMU_STATE_H_
#define _SENSOR_MODEL_IMU_STATE_H_

#include "datatype_basic.h"
#include "math_kinematics.h"

namespace SENSOR_MODEL {

/* Imu state with size 15. */
class ImuState {

public:
    ImuState() = default;
    virtual ~ImuState() = default;

public:
    Vec3 p_wi = Vec3::Zero();
    Quat q_wi = Quat::Identity();
    Vec3 v_wi = Vec3::Zero();
    Vec3 ba = Vec3::Zero();
    Vec3 bg = Vec3::Zero();

};

/* Imu state with size 18. */
class ImuExState : public ImuState {

public:
    ImuExState() : ImuState() {}
    virtual ~ImuExState() = default;

public:
    Vec3 g_w = Vec3(0, 0, 9.8f);

};

/* Imu preintegrate block. */
class ImuPreintegrateBlock {

public:
    ImuPreintegrateBlock() = default;
    virtual ~ImuPreintegrateBlock() = default;

public:
    Vec3 p_ij = Vec3::Zero();
    Quat q_ij = Quat::Identity();
    Vec3 v_ij = Vec3::Zero();

};

}

#endif
