targets = no_dip_principle_dirty.app
OBJS := no_dip_principle_dirty.o Boot.o SettingValueRam.o SettingValueRamFake.o

$(targets): $(OBJS)
	g++ $(OBJS) -o $(targets)

.cpp.o:
	g++ -std=c++11 -c $<

no_dip_principle_dirty.o: no_dip_principle_dirty.cpp
Boot.o: Boot.cpp Boot.h
SettingValueRam.o: SettingValueRam.cpp SettingValueRam.h
SettingValueRamFake.o: SettingValueRamFake.cpp SettingValueRamFake.h

.PHONY: clean
clean:
	rm -f $(targets) $(OBJS)