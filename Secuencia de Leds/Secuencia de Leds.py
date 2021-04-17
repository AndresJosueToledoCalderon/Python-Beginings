import serial, time, random #libreria de comunicacion serie
dev = serial.Serial('COM6', 9600, timeout=1) # selecciona el puerto y la velocidad de comunicacion
time.sleep(1.8)# Tiempo de espera para establecer la comunicacion


while dev.isOpen(): #detecta que la comunicacion serial este disponible
    val = 1
    if val == 0:
       val = 1
    ext = 'e'
    print()
    print(" Num1. Secuencia de Leds\n",
          "Num2. Secuencia de Leds en loop\n",
          "Num3. Secuencia aleatoria de leds")
    opcion = int(input(' Ingrese numero de 1 a 3: ')) #se ingresa el numero y lo vuelve int
                                           #ya que puede ser char o string
    if (opcion == 1):
        print()
        dev.write(str.encode('1'))
        time.sleep(1.2)
        print('Led 1')
        dev.write(str.encode('0'))
        time.sleep(0.2)
        dev.write(str.encode('2'))
        time.sleep(1.2)
        print('Led 2')
        dev.write(str.encode('0'))
        time.sleep(0.2)
        dev.write(str.encode('3'))
        time.sleep(1.2)
        print('Led 3')
        dev.write(str.encode('0'))
        time.sleep(0.2)
        dev.write(str.encode('4'))
        time.sleep(1.2)
        print('Led 4')
        dev.write(str.encode('0'))
        time.sleep(0.2)
        dev.write(str.encode('5'))
        time.sleep(1.2)
        print('Led 5')
        dev.write(str.encode('0'))
        time.sleep(0.2)
        dev.write(str.encode('6'))
        time.sleep(1.2)
        print('Led 6')
        dev.write(str.encode('0'))
        time.sleep(0.2)
        dev.write(str.encode('7'))
        time.sleep(1.2)
        print('Led 7')
        time.sleep(0.2)
        dev.write(str.encode('0'))
        time.sleep(0.2)
        dev.write(str.encode('8'))
        time.sleep(1.2)
        print('Led 8')
        dev.write(str.encode('0'))
        print('Leds Apagados!')
        time.sleep(0.2)
        #-------------------------
    elif (opcion == 2 and val == 1):
      while val>0:
        print()
        dev.write(str.encode('1'))
        dev.read()
        time.sleep(1.2)
        print('Led 1')
        dev.write(str.encode('0'))
        time.sleep(0.2)
        dev.write(str.encode('2'))
        time.sleep(1.2)
        print('Led 2')
        dev.write(str.encode('0'))
        time.sleep(0.2)
        dev.write(str.encode('3'))
        time.sleep(1.2)
        print('Led 3')
        dev.write(str.encode('0'))
        time.sleep(0.2)
        dev.write(str.encode('4'))
        time.sleep(1.2)
        print('Led 4')
        dev.write(str.encode('0'))
        time.sleep(0.2)
        dev.write(str.encode('5'))
        time.sleep(1.2)
        print('Led 5')
        dev.write(str.encode('0'))
        time.sleep(0.2)
        dev.write(str.encode('6'))
        time.sleep(1.2)
        print('Led 6')
        dev.write(str.encode('0'))
        time.sleep(0.2)
        dev.write(str.encode('7'))
        time.sleep(1.2)
        print('Led 7')
        time.sleep(0.2)
        dev.write(str.encode('0'))
        time.sleep(0.2)
        dev.write(str.encode('8'))
        time.sleep(1.2)
        print('Led 8')
        dev.write(str.encode('0'))
        print('Leds Apagados!')
        time.sleep(0.2)
        if val == 1:
            opcion2 = 0
            print()
        opcion2 = input("Cualquier letra continua el \nloop,'e' lo detine: \n")
        if opcion2 == ext:
                dev.write(str.encode('0'))
                print()
                print("Exit...")
                print()
                val = 0
        else:
                val = 1
                print()
                print("Regresando a loop")
                print()
    elif (opcion == 3):
        a = 0;
        print()
        while a<=15:
            numLed = random.randint(1, 8)
            numLed = str(numLed)
            dev.write(str.encode(numLed))
            time.sleep(1.2)
            print("Led No. ", numLed,'-',a)
            dev.write(str.encode('0'))
            time.sleep(0.2)
            a = a+1
            if a == 15:
                print()
                print("Terminado...\n")
                time.sleep(2)
    elif (opcion == 4):
        dev.read()

    else:
            print("Valor invalido o secuencia finalizada...")
        #condicion que termina el programa si el int es invalido