targets = ocp_principle_factories.app
OBJS := ocp_principle_factories.o Boot.o SettingValueRam.o Factories.o SettingValueSpiRam.o

$(targets): $(OBJS)
	g++ $(OBJS) -o $(targets)

.cpp.o:
	g++ -std=c++11 -c $<

ocp_principle_factories.o: ocp_principle_factories.cpp
Boot.o: Boot.cpp Boot.h
SettingValueRam.o: SettingValueRam.cpp SettingValueRam.h ISettingValue.h
Factories.o: Factories.cpp Factories.h 
SettingValueSpiRam.o: SettingValueSpiRam.cpp SettingValueSpiRam.h ISettingValue.h

.PHONY: clean
clean:
	rm -f $(targets) $(OBJS)