#ifndef __ELEGOO_CAR_CONFIG_H__
#define __ELEGOO_CAR_CONFIG_H__

#include <Arduino.h>

class ElegooCarConfig
{
public:
	class DistanceUnitConfig
	{
	public:
		uint8_t ECHO_PIN = PIN_A4;

		uint8_t TRIGGER_PIN = PIN_A5;

		int SERVO_PIN = 3;
	};

	class InfraredReceiverConfig
	{
	public:
		int RECEIVER_PIN = 12;

		int MAX_NUM_RECEIVERS = 10;
	};

	class BluetoothReceiverConfig
	{
	public:
		int MAX_NUM_RECEIVERS = 10;
	};

	class SerialConfig
	{
	public:
		unsigned long BAUD_RATE = 9600;
	};

	int SAFETY_DISTANCE_CM = 20;
	DistanceUnitConfig distanceUnitConfig;
	InfraredReceiverConfig infraredReceiverConfig;
	BluetoothReceiverConfig bluetoothReceiverConfig;
	SerialConfig serialConfig;
};

#endif
