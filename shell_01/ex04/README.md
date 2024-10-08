## ifconfig

This command is used to display the *current network configuration* for all active network interfaces on the system. It provides information such as the IP address, netmask, broadcast address, and MAC address (hardware address) for each interface.

*Example Output*
>eth0: flags=4163<UP,BROADCAST,RUNNING,MULTICAST>  mtu 1500<br>
        inet 192.168.1.2  netmask 255.255.255.0  broadcast 192.168.1.255<br>
        ether 00:1A:2B:3C:4D:5E  txqueuelen 1000  (Ethernet)<br>
        RX packets 123456 bytes 12345678 (12.3 MB)<br>
        TX packets 654321 bytes 87654321 (87.6 MB)<br>

## grep ether

* **grep** <br>This command searches for a specified pattern in the input text.
* **ether** <br>This is the pattern that grep is searching for. In the context of ifconfig output, it typically corresponds to the line displaying the MAC address of the network interfaces.

*Example Output* 
>ether 00:1A:2B:3C:4D:5E  txqueuelen 1000  (Ethernet)

## awk '{print $2}'

* **awk** <br><This is a powerful text processing tool used for pattern scanning and processing. It can manipulate and analyze data in a structured way.
* **'{print $2}'** <br>This tells awk to print the second field (column) from the input. By default, fields in awk are separated by whitespace (spaces or tabs).

*Example Output* 
00:1A:2B:3C:4D:5E
