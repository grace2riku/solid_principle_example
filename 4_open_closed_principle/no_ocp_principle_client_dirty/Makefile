targets = no_ocp_principle_client_dirty.app
OBJS := no_ocp_principle_client_dirty.o Boot.o SettingValueRam.o SettingValueSpiRam.o

$(targets): $(OBJS)
	g++ $(OBJS) -o $(targets)

.cpp.o:
	g++ -std=c++11 -c $<

no_ocp_principle_client_dirty.o: no_ocp_principle_client_dirty.cpp
Boot.o: Boot.cpp Boot.h
SettingValueRam.o: SettingValueRam.cpp SettingValueRam.h
SettingValueSpiRam.o: SettingValueSpiRam.cpp SettingValueSpiRam.h

.PHONY: clean
clean:
	rm -f $(targets) $(OBJS)