## Uppsetning á Thonny
Setjið upp Tonny fyrir microPython samkvæmt þessum leiðbeiningum [hér](https://randomnerdtutorials.com/getting-started-thonny-micropython-python-ide-esp32-esp8266/) 
Ef þið hafið Þegar sett upp Python umhverfið þá er nóg að setja bara upp Thonny
Notið Thonny til að setja upp firmware fyrir ESP32 S3 fyrir neðan eru leiðbeiningar til að gera það.
1. Farið í Run og Configure Iterpreter
2. Veljið Install or Update MicroPython (ESP tool)
3. Veljið port, MicroPythonFamily og variant
4. Veljið Install
5. Lokið

Prófið að keyra þennan kóða:
``` python
from machine import Pin
from time import sleep
led = Pin(2, Pin.OUT)
while True:
  led.value(not led.value())
  sleep(2)
```

