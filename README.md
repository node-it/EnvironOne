# Electronic Sweet Peas - EnvironOne Support library.

This is a support library for the EnvironOne module from Electronic Sweet Peas.

## Hardware characteristics

The library provides advanced functionality for accessing the two devices on the EnvironOne module. The devices available are the OPT3001 and the BME280.

The OPT3001 is a sensor that measures the intensity of visible light. The spectral response of the sensor tightly matches the photopic response of the human eye and includes significant infrared rejection. Measurements can be made from 0.01 lux up to 83k lux without manually selecting full-scale ranges by using the built-in, full-scale setting feature. This capability allows light measurement over a 23-bit effective dynamic range.

The BME280 is an integrated environmental sensor developed specifically for mobile applications where size and low power consumption are key design constraints. The unit combines individual high linearity, high accuracy sensors for pressure, humidity and temperature. The humidity sensor features an extremely fast response time which supports performance requirements for emerging applications such as context awareness, and high accuracy over a wide temperature range. The pressure sensor is an absolute barometric pressure sensor with features exceptionally high accuracy and resolution at very low noise. The integrated temperature sensor has been optimized for very low noise and high resolution. It is primarily used for temperature compensation of the pressure and humidity sensors, and can also be used for estimating ambient temperature.

## The library

The EnvironOne library provides the necessary functions for setting up and accessing the values from the two sensors. The examples will give you an idea on how to write your own code for this module.
