# IOT-SECURITY-SYSTEM

COMPANY : CODTECH IT SOLUTIONS

NAME : GANDETI SRAVANTHI

INTERN ID : CT04DF2120

DOMAIN : INTERNET OF THINGS

DURATION : 4 WEEKS

MENTOR : NEELA SANTOSH

In today’s world, security is no longer a luxury—it is a necessity. Whether it's for homes, offices, or public spaces, the demand for efficient, affordable, and reliable security systems is on the rise. To address this growing need in a simplified, accessible manner, this project aims to develop a virtual prototype of a motion-detecting security system using an Arduino microcontroller, entirely simulated on the Tinkercad platform. This system is designed to detect motion, simulate image capture, and generate real-time alerts, all without relying on any physical hardware. The objective is to showcase the conceptual functionality of a basic yet effective security solution that could easily be scaled up in real-world applications with physical components and IoT integration.

At the core of this project lies the Arduino Uno, a widely adopted and beginner-friendly microcontroller. It acts as the brain of the system, continuously monitoring input from a PIR (Passive Infrared) motion sensor. The PIR sensor is a low-cost component that detects infrared radiation, commonly used to sense movement of people or animals. When motion is detected, the sensor sends a HIGH signal to the Arduino, triggering a predefined sequence of actions that simulate the real-life response of a smart security system.

Upon detection of motion, the system performs three key actions. First, it simulates the behavior of a surveillance camera by printing a message in the Serial Monitor that says “Image Captured.” Since actual image processing or camera modules are not supported within the Tinkercad environment, this message serves as a placeholder to represent the event of capturing an image. Second, it prints an alert message, such as “ALERT: Motion detected!” to indicate that the system has responded to the movement. This message mimics a real-time notification that a user might receive on their mobile device in a fully developed IoT version of the system. Third, the system activates a visual alarm in the form of an LED connected to the Arduino. This LED lights up for a short duration, visually signaling the occurrence of a security breach or intrusion.

All of these functions are executed through a carefully written Arduino program, which handles sensor input, timing control, and output responses in a seamless loop. The use of delay functions ensures that the alarm remains active for a noticeable amount of time while preventing false triggers from flooding the Serial Monitor. The LED acts as a physical alert component, helping users visually confirm that the system has responded correctly. By using only Tinkercad’s simulation capabilities, this project provides a risk-free, zero-cost platform for learners, developers, and engineers to prototype and test the logic of a security system without needing physical components.

The primary value of this project lies in its educational and conceptual clarity. It introduces fundamental embedded system principles like digital input/output handling, sensor integration, condition checking, and simulation of real-world interactions through code. Though simplified, the system accurately mirrors the logical behavior of more complex commercial systems and lays a strong foundation for future upgrades such as camera modules, GSM or Wi-Fi communication, and cloud-based alert systems. In real implementation, this system could easily be extended to send SMS or app notifications, capture actual photos or videos, and interface with a broader IoT ecosystem.

In summary, this motion-detecting security prototype successfully demonstrates how a basic yet functional security response can be implemented, simulated, and validated entirely on a virtual platform like Tinkercad. It offers both a learning opportunity and a practical stepping stone toward more advanced smart security solutions, all without the need for physical hardware.


#OUTPUT

![Image](https://github.com/user-attachments/assets/c29a3aeb-0f40-4f20-8842-ac4b2ed080fe)
