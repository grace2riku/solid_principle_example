targets = dip_principle.app
OBJS := dip_principle.o Boot.o SettingValueRam.o

$(targets): $(OBJS)
	g++ $(OBJS) -o $(targets)

.cpp.o:
	g++ -std=c++11 -c $<

dip_principle.o: dip_principle.cpp
Boot.o: Boot.cpp Boot.h
SettingValueRam.o: SettingValueRam.cpp SettingValueRam.h ISettingValue.h

.PHONY: clean
clean:
	rm -f $(targets) $(OBJS)