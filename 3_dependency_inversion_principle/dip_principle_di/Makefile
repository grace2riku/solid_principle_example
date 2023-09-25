targets = dip_principle_di.app
OBJS := dip_principle_di.o Boot.o SettingValueRam.o Factories.o SettingValueRamFake.o

$(targets): $(OBJS)
	g++ $(OBJS) -o $(targets)

.cpp.o:
	g++ -std=c++11 -c $<

dip_principle_di.o: dip_principle_di.cpp
Boot.o: Boot.cpp Boot.h
SettingValueRam.o: SettingValueRam.cpp SettingValueRam.h ISettingValue.h
Factories.o: Factories.cpp Factories.h 
SettingValueRamFake.o: SettingValueRamFake.cpp SettingValueRamFake.h ISettingValue.h

.PHONY: clean
clean:
	rm -f $(targets) $(OBJS)