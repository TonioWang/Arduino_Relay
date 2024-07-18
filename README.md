Run the common relay with serial com port input under powershell command:

PS C:\Users\toniowang> $port= new-Object System.IO.Ports.SerialPort COM4,9600,None,8,one

PS C:\Users\toniowang> $port.open()

PS C:\Users\toniowang> $port.WriteLine("g")

PS C:\Users\toniowang> $port.WriteLine("G")

PS C:\Users\toniowang> $port.WriteLine("H")

PS C:\Users\toniowang> $port.WriteLine("h")

PS C:\Users\toniowang> $port.WriteLine("F")

PS C:\Users\toniowang> $port.WriteLine("f")
