targets = no_dip_principle_client_dirty.app
OBJS := no_dip_principle_client_dirty.o Boot.o SettingValueRam.o SettingValueSpiRam.o

$(targets): $(OBJS)
	g++ $(OBJS) -o $(targets)

.cpp.o:
	g++ -std=c++11 -c $<

no_dip_principle_client_dirty.o: no_dip_principle_client_dirty.cpp
Boot.o: Boot.cpp Boot.h
SettingValueRam.o: SettingValueRam.cpp SettingValueRam.h
SettingValueSpiRam.o: SettingValueSpiRam.cpp SettingValueSpiRam.h

.PHONY: clean
clean:
	rm -f $(targets) $(OBJS)