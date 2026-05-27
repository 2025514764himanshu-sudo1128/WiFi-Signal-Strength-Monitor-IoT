#  Wi-Fi Signal Strength Monitoring — IoT System

![IoT](https://img.shields.io/badge/IoT-NodeMCU-blue)
![Platform](https://img.shields.io/badge/Cloud-ThingSpeak-green)
![Language](https://img.shields.io/badge/Language-Arduino%20C++-orange)
![Status](https://img.shields.io/badge/Status-Completed-brightgreen)

> A real-time IoT system that measures and monitors Wi-Fi signal strength
> (RSSI) using NodeMCU and visualizes the data on the ThingSpeak cloud platform.

---

##  Problem Statement

Wi-Fi signal strength varies across locations and changes over time.
Identifying weak signal areas or dead zones manually is inefficient.
This project provides a continuous, automated solution to monitor
and analyze Wi-Fi signal strength in real time.

---

##  Objectives

- Measure Wi-Fi signal strength (RSSI) using NodeMCU
- Transmit collected data to ThingSpeak cloud platform
- Monitor signal strength in real time via graphical visualization
- Analyze network performance based on signal variations

---

##  Components Used

| Component | Purpose |
|-----------|---------|
| NodeMCU (ESP8266) | Main microcontroller with built-in Wi-Fi |
| Arduino IDE | Programming environment |
| ThingSpeak Cloud | Data storage and visualization |
| Wi-Fi Network | Connectivity medium |

---

##  RSSI Signal Reference

| RSSI Value | Signal Quality |
|------------|---------------|
| -30 to -50 dBm | Excellent |
| -50 to -70 dBm | Good |
| -70 to -80 dBm | Fair |
| Below -80 dBm | Poor / Dead Zone |

---

##  How It Works

1. **Connect** — NodeMCU connects to Wi-Fi using SSID and password
2. **Measure** — WiFi.RSSI() function reads signal strength in dBm
3. **Transmit** — RSSI value sent to ThingSpeak via HTTP request
4. **Visualize** — ThingSpeak displays real-time graph of signal variation

---

##  Code

The complete Arduino code is in the [`code/`](./code/) folder.

### Key functions used:
```cpp
WiFi.begin(ssid, password);   // Connect to Wi-Fi
WiFi.RSSI();                  // Read signal strength
client.connect(server, 80);   // Connect to ThingSpeak
```

---

##  Results

> ThingSpeak graph screenshot will be added after hardware testing.

---

##  Future Enhancements

- [ ] Mobile app integration for remote monitoring
- [ ] SMS/email alert system for weak signal detection
- [ ] Multi-device monitoring across different locations
- [ ] Heatmap generation of signal strength across a building

---

##  Author

**Himanshu Kumar**
- Sharda University
- B.Tech Engineering Student
- https://www.linkedin.com/in/himanshu-kumar-3b76943a4?utm_source=share_via&utm_content=profile&utm_medium=member_android
---

##  Presentation

Full project presentation is available in the
[`presentation/`](./presentation/) folder.
