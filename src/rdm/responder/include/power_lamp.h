/**
 * @file rdm/responder/include/power_lamp.h
 * @author Mitch Weisbrod
 * @brief This file contains power and lamp setting functions for the RDM
 * responder. The PIDs in power and lamp settings include RDM_PID_DEVICE_HOURS,
 * RDM_PID_LAMP_HOURS, RDM_PID_LAMP_STRIKES, RDM_PID_LAMP_STATE,
 * RDM_PID_LAMP_ON_MODE, and RDM_PID_DEVICE_POWER_CYCLES. This file also
 * includes getters and setters for these functions as appropriate.
 */
#pragma once

#include "dmx/include/types.h"
#include "rdm/include/types.h"
#include "rdm/responder.h"

#ifdef __cplusplus
extern "C" {
#endif

/**
 * @brief Registers the default response to RDM_PID_DEVICE_HOURS requests. This
 * function attempts to load a value from NVS. If none is found, the default is
 * 0.
 *
 * @param dmx_num The DMX port number.
 * @param cb A callback which is called upon receiving a request for this PID.
 * @param[inout] context A pointer to context which is used in the user
 * callback.
 * @return true if the PID response was registered.
 * @return false if there is not enough memory to register additional
 * responses.
 */
bool rdm_register_device_hours(dmx_port_t dmx_num, rdm_callback_t cb,
                               void *context);

/**
 * @brief Gets a copy of the device hours for this device.
 *
 * @param dmx_num The DMX port number.
 * @param[out] device_hours A pointer to a buffer which will store the device
 * hours.
 * @return the number of bytes written to device_hours.
 */
size_t rdm_get_device_hours(dmx_port_t dmx_num, uint32_t *device_hours);

/**
 * @brief Sets the device hours for this device.
 *
 * @param dmx_num The DMX port number.
 * @param device_hours The device hours to which to set this device.
 * @return true on success.
 * @return false on failure.
 */
bool rdm_set_device_hours(dmx_port_t dmx_num, uint32_t device_hours);

/**
 * @brief Registers the default response to RDM_PID_LAMP_HOURS requests. This
 * function attempts to load a value from NVS. If none is found, the default is
 * 0.
 *
 * @param dmx_num The DMX port number.
 * @param cb A callback which is called upon receiving a request for this PID.
 * @param[inout] context A pointer to context which is used in the user
 * callback.
 * @return true if the PID response was registered.
 * @return false if there is not enough memory to register additional
 * responses.
 */
bool rdm_register_lamp_hours(dmx_port_t dmx_num, rdm_callback_t cb,
                             void *context);

/**
 * @brief Gets a copy of the lamp hours for this device.
 *
 * @param dmx_num The DMX port number.
 * @param[out] lamp_hours A pointer to a buffer which will store the lamp
 * hours.
 * @return the number of bytes written to lamp_hours.
 */
size_t rdm_get_lamp_hours(dmx_port_t dmx_num, uint32_t *lamp_hours);

/**
 * @brief Sets the lamp hours for this device.
 *
 * @param dmx_num The DMX port number.
 * @param lamp_hours The lamp hours to which to set this device.
 * @return true on success.
 * @return false on failure.
 */
bool rdm_set_lamp_hours(dmx_port_t dmx_num, uint32_t lamp_hours);

/**
 * @brief Registers the default response to RDM_PID_LAMP_STATE requests. This
 * function attempts to load a value from NVS. If none is found, the default is
 * LAMP_OFF (0x00).
 *
 * @param dmx_num The DMX port number.
 * @param cb A callback which is called upon receiving a request for this PID.
 * @param[inout] context A pointer to context which is used in the user
 * callback.
 * @return true if the PID response was registered.
 * @return false if there is not enough memory to register additional
 * responses.
 */
bool rdm_register_lamp_state(dmx_port_t dmx_num, rdm_callback_t cb,
                               void *context);

/**
 * @brief Gets a copy of the lamp state for this device.
 *
 * @param dmx_num The DMX port number.
 * @param[out] lamp_state A pointer to a buffer which will store the lamp
 * state.
 * @return the number of bytes written to lamp_state.
 */
size_t rdm_get_lamp_state(dmx_port_t dmx_num, rdm_lamp_state_t *lamp_state);

/**
 * @brief Sets the lamp state for this device.
 *
 * @param dmx_num The DMX port number.
 * @param lamp_state The lamp state to which to set this device.
 * @return true on success.
 * @return false on failure.
 */
bool rdm_set_lamp_state(dmx_port_t dmx_num, rdm_lamp_state_t lamp_state);

/**
 * @brief Registers the default response to RDM_PID_LAMP_ON_MODE requests. This
 * function attempts to load a value from NVS. If none is found, the default is
 * LAMP_ON_MODE_OFF (0x00).
 *
 * @param dmx_num The DMX port number.
 * @param cb A callback which is called upon receiving a request for this PID.
 * @param[inout] context A pointer to context which is used in the user
 * callback.
 * @return true if the PID response was registered.
 * @return false if there is not enough memory to register additional
 * responses.
 */
bool rdm_register_lamp_on_mode(dmx_port_t dmx_num, rdm_callback_t cb,
                               void *context);

/**
 * @brief Gets a copy of the lamp on mode for this device.
 *
 * @param dmx_num The DMX port number.
 * @param[out] lamp_on_mode A pointer to a buffer which will store the lamp
 * on mode.
 * @return the number of bytes written to lamp_on_mode.
 */
size_t rdm_get_lamp_on_mode(dmx_port_t dmx_num, rdm_lamp_on_mode_t *lamp_on_mode);

/**
 * @brief Sets the lamp on mode for this device.
 *
 * @param dmx_num The DMX port number.
 * @param lamp_on_mode The lamp on mode to which to set this device.
 * @return true on success.
 * @return false on failure.
 */
bool rdm_set_lamp_on_mode(dmx_port_t dmx_num, rdm_lamp_on_mode_t lamp_on_mode);

/**
 * @brief Registers the default response to RDM_PID_DEVICE_POWER_CYCLES requests. This
 * function attempts to load a value from NVS. If none is found, the default is
 * 0.
 *
 * @param dmx_num The DMX port number.
 * @param cb A callback which is called upon receiving a request for this PID.
 * @param[inout] context A pointer to context which is used in the user
 * callback.
 * @return true if the PID response was registered.
 * @return false if there is not enough memory to register additional
 * responses.
 */
bool rdm_register_device_power_cycles(dmx_port_t dmx_num, rdm_callback_t cb,
                               void *context);

/**
 * @brief Gets a copy of the device power_cycles for this device.
 *
 * @param dmx_num The DMX port number.
 * @param[out] device_power_cycles A pointer to a buffer which will store the device
 * power_cycles.
 * @return the number of bytes written to device_power_cycles.
 */
size_t rdm_get_device_power_cycles(dmx_port_t dmx_num, uint32_t *device_power_cycles);

/**
 * @brief Sets the device power_cycles for this device.
 *
 * @param dmx_num The DMX port number.
 * @param device_power_cycles The device power_cycles to which to set this device.
 * @return true on success.
 * @return false on failure.
 */
bool rdm_set_device_power_cycles(dmx_port_t dmx_num, uint32_t device_power_cycles);

#ifdef __cplusplus
}
#endif
