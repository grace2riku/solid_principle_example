targets = dip_principle_factories.app
OBJS := dip_principle_factories.o Boot.o SettingValueRam.o Factories.o SettingValueRamFake.o

$(targets): $(OBJS)
	g++ $(OBJS) -o $(targets)

.cpp.o:
	g++ -std=c++11 -c $<

dip_principle_factories.o: dip_principle_factories.cpp
Boot.o: Boot.cpp Boot.h
SettingValueRam.o: SettingValueRam.cpp SettingValueRam.h ISettingValue.h
Factories.o: Factories.cpp Factories.h 
SettingValueRamFake.o: SettingValueRamFake.cpp SettingValueRamFake.h ISettingValue.h

.PHONY: clean
clean:
	rm -f $(targets) $(OBJS)