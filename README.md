# Seed-Scattering-Drone
Manually controlled agricultural drone for seed scattering, built using embedded systems and sensors to enhance seed distribution efficiency in farms.

# How It Works
The Seed Scattering Drone is a custom-built UAV designed to distribute seeds, fertilizers, or other granular materials across large or inaccessible agricultural zones with precision and efficiency.

## Key Features:
Platform: Built on a stable F450 quadcopter frame

Motors: Powered by EMax 935KV brushless motors for steady lift and flight

Flight Controller: Pixhawk 2.4.8 enables autonomous navigation using GPS waypoint tracking through Mission Planner

GPS Module: M8N GPS ensures high-accuracy positioning

Manual Control: FlySky FSi6S transmitter allows real-time override and telemetry monitoring

## Seed Dispensing System:
A 3D-printed hopper mechanism includes a servo motor to dynamically regulate the seed outlet

Arduino UNO controls the servo, responding to flight conditions like speed and altitude

NodeMCU Wi-Fi module enables wireless telemetry, configuration, and integration with IoT-based smart farming platforms

## Power & Safety:
4200 mAh LiPo battery powers the system

Monitored by a power module and cell checker for safe voltage tracking

Vibration dampeners improve sensor readings and ensure stable GPS data

## Why This Project?

This drone system presents a scalable, eco-friendly, and technologically advanced solution for:

Precision agriculture

Seed bombing in reforestation

Efficient land coverage in challenging terrains
