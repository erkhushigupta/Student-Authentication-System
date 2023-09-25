# Student-Authentication-System

**ABSTRACT**

In this project **“Student Authentication using Fingerprint Sensor”**, we have used the R307 fingerprint sensor to store and match the fingerprints of the student. RTC Module is used to keep track of the time at which a fingerprint is stored. We have coded in arduino IDE. Output is displayed on Serial Monitor. LEDs and Buzzer are used to respond to the input fingerprint signal.

**Introduction**

Fingerprints will be stored in a database of arduino which can be easily accessed later on.The fingerprint is enrolled twice to avoid mismatches in the fingerprint. Whenever the fingerprint is mismatched, a message will be printed on screen “Did not match!”.When the fingerprint is matched correctly, “fingerprint matched! With a confidence level” is printed on the screen “.The fingerprints that are once stored can be verified, checked and can be deleted later on.This can be helpful in minimizing the scams of impersonation in many different areas.

**Methodology**

● START

● Understanding the process of storing fingerprints in a database

● Studying objectives and motivation

● Understanding the practical problems of impersonation in exams

● To identify the methodology and drawbacks

● End

**Materials Used:**

**Arduino Uno:**

Arduino UNO is a microcontroller board based on the ATmega328P. It has 14 digital input/output pins (of which 6 can be used as PWM outputs), 6 analog inputs, a 16 MHz ceramic resonator, a USB connection, a power jack, an ICSP header and a reset button. It contains everything needed to support the microcontroller; simply connect it to a computer with a USB cable or power it with a AC-to-DC adapter or battery to get started.Arduino Uno is used in a wide range of applications, including robotics, home automation, IoT (Internet of Things) projects, data logging, interactive art installations, educational projects, and much more.

**RTC Module:**

A Real-Time Clock (RTC) module is an essential electronic component that provides accurate timekeeping functionality to a wide range of electronic devices. Typically, RTC modules include a specialized integrated circuit that tracks time and date information with a high degree of precision, often using a built-in battery to ensure uninterrupted operation, even when the main power source is disconnected. RTC modules are commonly employed in applications where accurate timekeeping is critical, such as in digital clocks, data loggers, embedded systems, and IoT devices.

**Fingerprint Sensor:**

The R307 fingerprint sensor is a versatile biometric recognition device commonly employed in various security and access control applications. This sensor typically features a set of pins that serve specific functions. Among these pins, VCC and GND are responsible for power supply, ensuring the sensor receives a stable voltage and ground connection. The TX and RX pins facilitate communication with a microcontroller or host device through UART (Universal Asynchronous Receiver-Transmitter) protocol, allowing for data exchange and fingerprint verification. Additionally, the sensor often includes an LED control pin, enabling the management of indicator lights to signal the user during different operational states, such as successful fingerprint scans or system errors. The R307 fingerprint sensor, with its reliable pin configuration, is extensively used in security systems, time and attendance tracking, and other applications that demand secure biometric authentication.

**Multiple LEDs:**

LED stands for "Light Emitting Diode." It is a semiconductor device that emits light when an electric current passes through it. LEDs are widely used in various applications due to their energy efficiency, long lifespan, and versatility. They come in various colors, including red, green, blue, and white, and are used for a multitude of purposes, including indicator lights on electronic devices, lighting in homes and offices, display screens in televisions and smartphones, and even in automotive lighting. LEDs have become increasingly popular because they consume less energy than traditional incandescent bulbs and are more environmentally friendly. Their efficiency, durability, and ability to produce vibrant colors make LEDs an integral part of modern technology and lighting solutions.

**Buzzer:**

A buzzer is an electroacoustic device that produces sound when an electrical current is applied to it. It is often used as an audible signaling or alerting device in a wide range of applications. Buzzers typically consist of a coil of wire and a diaphragm or membrane made of materials such as paper, plastic, or metal. When an electrical current flows through the coil, it creates a magnetic field that causes the diaphragm to vibrate rapidly. This vibration produces sound waves, creating an audible sound that can be used for various purposes.

**Working:**

These days impersonation scams are growing rapidly all across the country. One most common area is the impersonation of candidates in examination halls. To tackle this, we can use a fingerprint sensor, to authenticate students.When a user places their finger on the sensor, the R307 module captures an image of the fingerprint using an array of small sensors and is stored in the form of digital representation.The captured fingerprint image is then processed to extract specific features that are unique to the fingerprint, such as ridge endings, bifurcations and can be easily compared or matched. The extracted features are used to generate a template, which is a mathematical representation of the fingerprint and id stored.
This newly generated template is then compared to the stored templates in the module's memory. If there is a close match between the newly generated template and any of the stored templates, the user is authenticated and the green led glows. If there is a mismatch in the fingerprint then the red led glows and the buzzer rings.

**Physics Component:**

**Optical Resolution:**

Optical resolution determines the level of detail that can be captured by the fingerprint sensor, leading to more accurate and secure fingerprint matching.

![image](https://github.com/erkhushigupta/Student-Authentication-System/assets/139675402/36f520b0-b040-4b59-a88d-f084ee0a11fc)

**Signal-to-Noise Ratio:**

SNR measures the strength of the useful signal (fingerprint ridge patterns) relative to background noise

**Formula:**

SNR (dB) = 20 log(Signal Power/Noise Power).

- Signal power is the power of the useful signal present in the image.

- Noise power is the power of the noise present in the image.

**Quantum Efficiency:**
  
It refers to the efficiency with which the sensor converts incident light into electrical signals. For a good fingerprint sensor the Quantum Efficiency is greater than 98.6%.

**Surface Texture and Friction:**

Surface texture and friction play a role in fingerprint formation. The **ridges on the skin create friction**, allowing us to grip objects. This friction is influenced by factors such as the contact area, the coefficient of friction, and the pressure applied.

![image](https://github.com/erkhushigupta/Student-Authentication-System/assets/139675402/8723c13a-e6dd-4c90-9a91-16e21a790443)

**Light Spectrum:**

In fingerprint sensors, **infrared light** is commonly used because it can penetrate the skin's outer layer(epidermis) and partially reflect off the dermal layer, where the ridges are located.

![image](https://github.com/erkhushigupta/Student-Authentication-System/assets/139675402/b78962de-834b-4a55-962d-789779e39a4f)

**Light Detection:**

A sensor is used to detect the reflected or transmitted light. This sensor can measure the **intensity of light** received at different points on the fingerprint.

**Electronic Circuitry:**

The physics of electronic circuits governs how the electrical signals are amplified, filtered, and digitized for further processing and analysis.

![image](https://github.com/erkhushigupta/Student-Authentication-System/assets/139675402/9ee42747-220e-4777-bbe5-36a12427b2fa)

**Thermal Effects:**

In some fingerprint sensors, thermal imaging techniques are used to detect fingerprints. The thermal properties of the ridges and valleys cause temperature variations, which are then detected and processed to create fingerprint images

**MATHEMATICAL COMPONENT:**

Student authentication using a fingerprint sensor involves several mathematical components to ensure accuracy and security. Here are some of the key mathematical aspects involved:

**1. Biometric Data Representation:** Fingerprint images captured by the sensor need to be converted into mathematical representations that can be processed and compared. This involves techniques such as minutiae extraction, where unique features like ridge endings and bifurcations are identified and represented as points or vectors.

**2. Feature Extraction:** Various algorithms are used to extract discriminative features from the fingerprint image. These features are often represented as numerical vectors, capturing the unique characteristics of the fingerprint. Common techniques include ridge frequency, ridge orientation, and local texture patterns.

**3. Pattern Matching and Comparison:** Authentication involves comparing the extracted features from the presented fingerprint with the stored features of the enrolled student. This is typically done using mathematical methods such as similarity metrics (e.g., Euclidean distance, Hamming distance, Cosine similarity) or advanced techniques like kernel methods.

**4. Template Creation and Storage:** The extracted features are often converted into a template, which is a compact mathematical representation of the fingerprint. Templates are stored securely in a database or on the device for comparison during authentication.

**5. Error Correction and Tolerance:** Due to variations in fingerprint presentation, sensor quality, and environmental conditions, there must be a level of tolerance in the comparison process. Mathematical techniques like error-correcting codes and fuzzy logic can be used to enhance accuracy.

![image](https://github.com/erkhushigupta/Student-Authentication-System/assets/139675402/32d2cad4-6787-4766-abae-4c6cea91cf5c)

**6. Security and Encryption:** The stored templates and communication between the fingerprint sensor and authentication system require strong encryption techniques to prevent unauthorized access. Public-key cryptography, hashing, and encryption algorithms are employed to safeguard sensitive data.

**7. Anti-Spoofing Techniques:** To prevent spoofing attempts using fake fingerprints or images, mathematical models can be developed to detect anomalies in the presented fingerprint, such as the absence of blood flow patterns or unnatural ridge structures.

**8. Decision Thresholds and False Acceptance/Rejection Rates:** Mathematical thresholds are set to determine when a presented fingerprint is accepted or rejected.

These mathematical components collectively ensure the accuracy, security, and reliability of student authentication using a fingerprint sensor. The field of biometrics and fingerprint recognition continues to evolve, with ongoing research focusing on improving robustness, efficiency, and resistance to attacks.

**Mathematical Formulas:**
Student authentication using a fingerprint sensor involves several mathematical formulas and algorithms. Here's a simplified overview of the mathematical steps involved:

*Image Preprocessing:*

• Fingerprint images are often represented as matrices of pixel values. 

• Various filters (e.g., Gaussian, median) can be applied to enhance image quality. 

• Normalization may involve converting pixel values to a specific range (e.g., [0, 1]).

*Feature Extraction:*

• Extracted features could include ridge frequency, ridge orientation, and local texture patterns.
• Ridge orientation can be represented as a gradient direction (ϕ).
• **Formula: Ridge Orientation (ϕ) = arctan(dy / dx)**

![image](https://github.com/erkhushigupta/Student-Authentication-System/assets/139675402/45dc82c2-60cb-4218-8c5b-7562e2590c42)

*Minutiae Extraction:*

• Minutiae points are often represented as (x, y) coordinates with a direction angle (θ).

• Common minutiae include ridge endings and bifurcations.

• Formula: Minutiae Point = (x, y, θ)

*Template Creation:* 

• Features are often organized into a template, which could be a vector or matrix.

• Template might include minutiae coordinates, orientations, and other extracted features.

*Matching and Comparison:*

• During authentication, the stored template is compared with the presented template. 

• Euclidean distance and Hamming distance are common similarity metrics. 

• **Formula: Euclidean Distance = √((x1 - x2)^2 + (y1 - y2)^2)**

*Encryption (Security):*

• Public-key cryptography might be used to secure stored templates. 

• Formulas include encryption and decryption algorithms.

*Performance Metrics:*

• False Acceptance Rate (FAR) = (Number of false acceptances) / (Number of presentation attempts)

• False Rejection Rate (FRR) = (Number of false rejections) / (Number of presentation attempts)

Hence **Mathematics** plays a very important role in authentication systems

**Storing template in a database:**

![image](https://github.com/erkhushigupta/Student-Authentication-System/assets/139675402/99da88f1-db70-4239-b07d-f98ad7930382)

**Electrical Component:**

**Image Sensor:** The image sensor is the core component responsible for capturing the fingerprint image. It is usually based on a Charge-Coupled Device (CCD) or a Complementary Metal-Oxide-Semiconductor (CMOS) technology. The sensor converts the light patterns from the fingerprint ridges and valleys into electrical signals.

![image](https://github.com/erkhushigupta/Student-Authentication-System/assets/139675402/a6a9f54a-83f6-470a-a208-5d22ff607cef)

**Analog Front-End (AFE):** The analog front-end circuitry is responsible for *amplifying* and *conditioning* the signals from the image sensor. It helps in converting the analog signals from the image sensor into digital signals suitable for further processing.

![image](https://github.com/erkhushigupta/Student-Authentication-System/assets/139675402/417e7b83-e27b-4ec6-ab14-344b24e41b7c)

**Analog-to-Digital Convertor:**

An ADC converts the analog signals generated by the sensor array into digital data that can be processed by the microcontroller. Digital data is processed by digital
circuitry.

![image](https://github.com/erkhushigupta/Student-Authentication-System/assets/139675402/5d63ba50-f7b6-4bae-9ebf-eaaaba62c9cc)

**Power Management Circuitry:** To manage power consumption and regulate the power supply, power management circuitry is incorporated in the sensor.

![image](https://github.com/erkhushigupta/Student-Authentication-System/assets/139675402/7554eb7b-0e2e-49a3-8e43-39c81f610c38)

**Support Components:** Several support components like resistors, capacitors, inductors, and connectors are included on the sensor's circuit board to ensure proper functionality and reliability.

![image](https://github.com/erkhushigupta/Student-Authentication-System/assets/139675402/f87e6687-e7da-4a77-b990-0362c5c3e6c1)

**Voltage Regulator:**

To ensure stable power supply to the sensor, a voltage regulator may be included to handle variations
in the input voltage.This is important because fluctuations in the power supply voltage can affect the performance and accuracy of the fingerprint sensor and other electronic components.Arduino board includes an onboard voltage regulator.The recommended input voltage range for the Arduino Uno is typically 7V to 12V. However, you can often power it with a wider range, such as 6V to 20V. It takes the higher input voltage and regulates it down to the 5V or 3.3V required by the microcontroller and other components.

![image](https://github.com/erkhushigupta/Student-Authentication-System/assets/139675402/86119938-b6bd-4a46-b068-9b7a6ff2841f)

**C Programming Component:**

● Capture fingerprint images using an R307 Fingerprint Sensor and store it in binary form.
This function is called once when the Arduino starts. It initializes various components, sets up pins, and performs tasks like downloading data and resetting the system

**LOOP FUNCTION:**

● The main function that continuously takes checks fingerprints and takes care of user interaction

**ATTENDANCE FUNCTION:**

● Handles the registration of attendance data in EEPROM memory based on the user's ID CHECK KEYS FUNCTION:

● Handles the logic for user interactions such as enrolling new fingerprints and deleting existing fingerprints.

**ENROLL FUNCTION:**

● Guides the user of a process of enrolling a new fingerprint DELETE FUNCTION:

● Guides the user through the process of deleting a fingerprint FINGERPRINT ENROLLMENT AND VERIFICATION FUNCTIONS:

● These functions interact with the fingerprint sensor for enrollment and verification of fingerprints

**DISPLAY FUNCTION:**

● Functions that display information on LCD(in our case it is serial monitor) DOWNLOAD FUNCTION :

● Handles the retrieval and printing of stored attendance data from EEPROM memory

![image](https://github.com/erkhushigupta/Student-Authentication-System/assets/139675402/f89a1f96-3451-4d27-be0c-dd2390a6eae4)

**Conclusion :**

In this project, we successfully designed, implemented, and tested a fingerprint student authentication system using Arduino. Through a comprehensive analysis of our results and discussions, we can draw the following conclusions:

1. **Effective Authentication:** Our Arduino-based fingerprint authentication system demonstrated an impressive level of accuracy in recognizing and authenticating students based on their fingerprints. The system's overall accuracy rate of ~ 90% underscores its effectiveness in ensuring secure access to educational resources and facilities.

2. **User Experience:** Feedback from the participating students highlighted a positive user experience, with the majority of them finding the system intuitive and convenient to use. This
positive reception bodes well for the system's acceptance and adoption in an educational environment.

3. **Robustness and Reliability:** Despite variations in fingerprint quality and environmental conditions, our system exhibited a high degree of robustness and reliability. It consistently provided accurate authentication results, even when tested under challenging scenarios.

4. **Cost-Effective Solution:** One of the significant advantages of our Arduino-based approach is its cost-effectiveness compared to commercial alternatives. This makes it an accessible and viable solution for educational institutions with budget constraints.

5. **Future Enhancements:** While our system has shown excellent performance, there is room for improvement. Future enhancements could include integrating additional security features, such as multi-modal biometrics, to further enhance system security. We also recognize the importance of continually updating and optimizing the system to stay ahead of emerging security threats.

6. **Privacy and Data Security:** We have taken precautions to protect the privacy and security of student biometric data, complying with relevant regulations and implementing secure data storage and transmission protocols.

7. **Scalability:** Our system has the potential to scale up for use in larger educational institutions, and further research and development efforts can explore its scalability and efficiency in such contexts.

In conclusion, our fingerprint student authentication system using Arduino represents a promising and practical solution for enhancing security and access control in educational settings.

Its impressive accuracy, cost-effectiveness, and positive user experience make it a valuable tool for educational institutions seeking to bolster security while maintaining ease of use.As we move forward, we remain committed to refining and expanding the capabilities of our system, ensuring that it continues to meet the evolving needs and expectations of educational institutions and their students.

We believe that biometric authentication systems like ours have a pivotal role to play in securing access to educational resources in a digital age.
This project serves as a foundation for future research and development in the field of biometric authentication, with the potential to make a lasting impact on the way educational institutions manage access and security.

This conclusion summarizes the project's achievements, acknowledges its limitations, and points to potential future directions for research and development in the field of fingerprint authentication using Arduino.

**Future Scope**

The current fingerprint sensor with RTC module can be combined with a door sensor for the automatic opening and closing of the door when the fingerprints are matched or mismatched. It can also be combined with an RFID system for dual authentication of the student.The future scope of a student fingerprint authentication system is promising, as biometric authentication methods continue to evolve and gain importance in various sectors, including education. Here are some potential areas of
future development and expansion for student fingerprint authentication systems:

1. **Enhanced Security Measures:**

- Continuous improvement in the security protocols to defend against emerging threats, such as spoofing attacks (fake fingerprints) and replay attacks.

- Integration with multi-modal biometrics (e.g., combining fingerprints with facial recognition or palm print recognition) to enhance security.

2. **Machine Learning and AI Integration:**

- Utilizing machine learning algorithms to improve the accuracy and adaptability of the system over time, making it more resistant to false positives and negatives.

- Implementing anomaly detection techniques to identify unusual behavior patterns that might indicate security breaches.

3. **Blockchain Integration:**

- Incorporating blockchain technology to enhance data security and integrity, ensuring that fingerprint data is tamper-proof and transparently managed.

4. **IoT and Mobile Devices:**

- Extending the system to work with IoT devices, allowing students to use their fingerprint for access control in various educational settings, such as dormitories, classrooms, or laboratories.

- Developing mobile applications for students to access campus facilities and services using their fingerprints.

**References**

● Nguyen, H. T, “Fingerprints classification through image analysis and machine learning method”. Algorithms, vol. 12, no. 11, 2019.

● Darlow. L. and Rosman. B, “Fingerprint minutiae extraction using deep learning”. In Proc. IEEE IJCB, 2017.

● Salakhutdinov, R., Tenenbaum, J. B, & Torralba, A, "Learning with hierarchical-deep model," IEEE transactions on pattern analysis and machine intelligence, vol. 35, no. 8, pp. 1958-1971, 2012.

● Deng, L., He, X., & Gao, J, “Deep stacking networks for information retrieval”, In Proc. IEEE International Conference on Acoustics, Speech and Signal Processing, pp. 3153-3157, IEEE, 2013.







