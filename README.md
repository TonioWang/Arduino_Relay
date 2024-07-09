Run the common relay with serial com port input under powershell command:
PS C:\Users\12488> $port= new-Object System.IO.Ports.SerialPort COM4,9600,None,8,one
PS C:\Users\12488> $port.open()
PS C:\Users\12488> $port.WriteLine("g")
PS C:\Users\12488> $port.WriteLine("G")
PS C:\Users\12488> $port.WriteLine("G")
PS C:\Users\12488> $port.WriteLine("g")
PS C:\Users\12488> $port.WriteLine("H")
PS C:\Users\12488> $port.WriteLine("h")
PS C:\Users\12488> $port.WriteLine("F")
PS C:\Users\12488> $port.WriteLine("f")
PS C:\Users\12488> $port.WriteLine("F")
