---
marp: true
theme: gaia
size: 16:9
paginate: true
headingDivider: 2
header: 【連続講座】ソフトウェア設計原則【SOLID】を学ぶ #4 開放閉鎖の原則
footer: 2023 @juraruming
style: |
---
# 【連続講座】ソフトウェア設計原則【SOLID】を学ぶ
#4 開放閉鎖の原則（open/closed principle）

パーソルクロステクノロジー株式会社
第1技術開発本部　第4設計部　設計2課　阿部耕二

<!--
_class: lead
_paginate: false
_header: ""
footer: ""
-->

# 目次
- 自己紹介
- SOLIDについて
- 開放閉鎖の原則（open/closed principle）について
- 日常にある【開放閉鎖】
- 原則違反の例
- 原則に則った例
- 今回の設計所感
- 設計についてのディスカッション・質問
- 参考資料

<!--
_header: ""
_footer: "" 
-->

# 自己紹介
- 名前: 阿部　耕二（あべ　こうじ）
- 所属: パーソルクロステクノロジー株式会社
第1技術開発本部 第4設計部 設計2課
- 医療機器の組込みソフトウェア開発。C言語。
- 趣味: 宇宙開発（[リーマンサットプロジェクト](https://www.rymansat.com/)広報メンバー）
- LAPRASポートフォリオ: https://lapras.com/public/k-abe
- Twitter: @juraruming

# SOLIDについて
<!--
_footer: "" 
-->
設計の5原則の頭文字をとったもの。

- S 単一責務の原則（Single Respomsibility Principle）
- **O オープン・クローズドの原則（Open Closed Principle）**
- L リスコフの置換原則（Liskov Substitution Principle）
- I インターフェイス分離の原則（Interface Segregation Principle）
- D 依存関係逆転の原則（Dependency Inversion Principle）

## SOLID原則の重要性
<!--
_footer: "" 
-->
> 参考資料3より引用

- 凝集度が高くなる
- 他のモジュールと疎結合になる
- 各モジュールの目的が明確に分けられると、コード変更の際の影響は局所化される。結果、テストしやすい設計になる。

上記の特徴を持つと再利用しやすいコードになる。


# 開放閉鎖の原則（open/closed principle）について
<!--
_footer: "" 
-->
* 拡張に開かれており（Open）、変更に閉じられていること（Closed）。

機能拡張（追加）の際にクライアントコード（機能追加したコードを使う側）に変更が発生しないこと。


# 日常にある【開放閉鎖】
<!--
_footer: "" 
-->
生活していると様々な製品・事象で開放閉鎖の原則を感じることができる。

開放閉鎖の原則はソフトウェア設計の領域のみでなく、ビジネスを大きくするための考え方など幅広い事象に転用できる、と個人的に思っている。

いくつか私が日常生活で感じた開放閉鎖の原則について紹介したい。
これらの考え方、事象はより良いソフトウェアの構造にするためのヒントになりそうと感じている。

## 日常にある【開放閉鎖】の例
<!--
_footer: "" 
-->
* USB
* Apple ACアダプタ
* apt-getコマンド
* その他

---
日常にある【開放閉鎖】の例
▪️USB
日常にある【開放閉鎖の原則】の考えたときに一番はじめにイメージしたのがUSB。参考資料3の説明がわかりやすかったので引用する。

参考資料3: [テスト駆動開発による組み込みプログラミング―C言語とオブジェクト指向で学ぶアジャイルな設計](https://www.oreilly.co.jp/books/9784873116143/) 11.1.2 オープン・クローズドの原則（OCP : Open Closed Principle）

> USBポートは規格に準拠したデバイスなら何でも挿せるよう拡張可能だが、新しいデバイスを受け付けるために変更する必要はない。したがってUSBポートのあるコンピュータは、デバイス追加による機能の拡張に対して開いているが、デバイスがUSBに準拠している限り機器構成の変更に対しては閉じていると言える。

---
日常にある【開放閉鎖】の例
▪️Apple ACアダプタ

AppleのACアダプタも開放閉鎖かなと思った。
![width:600 height:400px](img/apple_acアダプタ_全体.png)

![bg right width:500 height:500px](img/apple_acアダプタ_取り外し.png)

---
アダプタは取り外し可能で海外でも使えるように考慮されていると予想できる。調べてみたら[Apple ワールドトラベルアダプタキット](https://support.apple.com/ja-jp/HT202114)なる製品があり、7種類のアダプタが付属していた。
プラグ部分が拡張でき、プラグ部分を変更しても本体部分に変更が及ばない作りになっている。

![center width:400 height:380px](img/Appleワールドトラベルアダプタキット.png)

---
日常にある【開放閉鎖】の例
▪️apt-getコマンド
Linux（DebianやUbuntu）のパッケージ追加コマンド。
パッケージを追加してもLinuxカーネル本体には影響がない。
拡張に開かれていて、修正に閉じていると言えそう。

---
日常にある【開放閉鎖】の例
▪️その他
* 家庭のコンセント
* マクドナルド ハッピーセット リカちゃん

---
▪️家庭のコンセント
コンセント側はコンセントに挿される機器を気にしない。
何がさされても変わらずAC100Vを供給する。
機器側はコンセントから供給されるAC100Vを機器側の仕様に従って利用する。

例）ヘアドライヤーは交流で動作するものが多い印象
例）ACアダプタは交流→直流へ変換し所望の電圧にしている（12V, 5V, 3.3V, その他）

【AC100Vが供給される】ことに従えば様々な機器を動作させることができる。
様々な機器を動作させるためにコンセントの動作に変更は発生しない。

---
▪️マクドナルド ハッピーセット リカちゃん
こどもたちが大好きマクドナルド ハッピーセットの玩具 リカちゃんに注目した。

![bg right width:400 height:380px](img/リカちゃん全員.png)

全キャラの共通事項
* ポージングが同じ
* メイクが同じ
* ヘアスタイルはパーツ化してあり変更可能

---
▪️マクドナルド ハッピーセット リカちゃん

* ラプンツェル風（左）
![bg right width:300 height:380px](img/リカちゃん_ラプンツェル.png)

* ドレス着せ替えバージョン（中央）
![bg right width:300 height:380px](img/リカちゃん_ドレス.png)

* 髪色変化（右）
![bg right width:300 height:380px](img/リカちゃん_髪色変化.png)

---
▪️マクドナルド ハッピーセット リカちゃん

頭部のパーツはネジ止めされている。
頭部をパーツ化する設計でリカちゃんのヘアスタイルのバリエーションを増やすための拡張が可能になっている。

![bg right width:500 height:400px](img/リカちゃん_頭パーツ.png)

---
▪️マクドナルド ハッピーセット リカちゃん

リカちゃんは共通の特性を持ちながらもいろいろな特徴を持つ拡張ができている。

このような商品展開を続けられれば今後もハッピーセットはこどもたちの収集癖と心とおなかを鷲掴みにすることでしょう。

このような製品を多く生産するには生産ラインにも工夫がありそう。

---
日常にある【開放閉鎖】の例
日常にある【開放閉鎖】はつぎのような特徴がある。

* 拡張しやすくするためのポイントが設計され、用意されている。
例）Apple ACアダプタはプラグの取り外しで様々な国のコンセントに対応可能
例）リカちゃんであればポージング・メイク・ヘアスタイルのパーツ化の共通事項

* 拡張はそれ以外の本体部分に影響しないように設計されている
例）Apple ACアダプタはプラグがどの形状になっても本体は変化しない
例）リカちゃんはどのバリエーションでもお人形のベースは変わらない（と思う。製造者ではないので確証はない）

---
日常にある【開放閉鎖】の例

* 拡張しやすくするためのポイントが設計され、用意されている。
* 拡張はそれ以外の本体部分に影響しないように設計されている

上の特徴をソフトウェアに持ち込めば**拡張に開かれており（Open）、変更に閉じられている（Closed）** 構造になりそう。

具体的にどうすれば良いのか???


# 原則違反の例
<!--
_footer: "" 
-->
前回の[#3 依存性逆転の原則](https://www.docswell.com/s/juraruming/5EN9ME-2023-09-28-065704)と同じテーマで説明をしていきます。
■テーマ：
仮空の医療モニタ。患者の生体情報をモニタリングできる。
今回は**設定値の書込み・読込み機能**について注目する。

■テーマの要件：
* 画面から装置の設定ができる
* 設定値の例
表示エリア選択、表示テキストの名称・色、画面の輝度、音量、音の種類、センサの校正値（ゲイン・オフセット）、その他いろいろ

---
■テーマの要件（続き）：
今回は**前回設定値の反映機能のみ**を対象とする。

* 起動時に前回設定値を装置に反映する。
* ~~設定値は持ち運べる（装置の設定状態をPCで見れる）~~

■テーマを実現する要素技術：
●前回設定値の反映
* SRAMの設定値を電池でバックアップ

●~~設定値の持ち運び~~
* ~~SDカード書込み・読込み~~

---
■今後想定される要素技術の変更：
●前回設定値の反映
* （現状）SRAMを電池にてバックアップ
⇒SPI接続のシリアルRAMへ
⇒MRAMでバックアップ電池不要へ

●~~設定値の持ち運び~~
* ~~（現状）SDカード書込み・読込み~~
~~⇒USBメモリへの変更~~

---
![bg right width:620px height:640px](img/前回設定値の反映classNG.png)
説明のシナリオ：
* 現在はBootクラスとSettingValueRAMクラスが実装済みとする。
* 仕様変更（将来的にRAMが生産中止になることがわかった）で次ロットからSPIのRAMに変更することになった、というストーリーとします。

---
GitHub URL: [no_ocp_principle](https://github.com/grace2riku/solid_principle_example/tree/main/4_open_closed_principle/no_ocp_principle)

```cpp:Boot.cpp
// Boot.cpp
#include "Boot.h"

// コンストラクタの実装
Boot::Boot() {
    _settingValue = new SettingValueRam();
}

Boot::~Boot() {
    delete _settingValue;
}

int Boot::readSettingValue() {
    return _settingValue->read();
}
```

---
```cpp:Boot.h
// Boot.h
#ifndef _H_BOOT_
#define _H_BOOT_

#include "SettingValueRam.h"

class Boot {
    private:
        SettingValueRam* _settingValue;

    public:
        Boot();
        ~Boot();
        int readSettingValue();
};

#endif	// _H_BOOT_
```

---
```cpp:SettingValueRam.cpp
// SettingValueRam.cpp
#include "SettingValueRam.h"

// コンストラクタの実装
SettingValueRam::SettingValueRam() {
}

void SettingValueRam::write() {
}

int SettingValueRam::read() {
    return 123;
}
```

---
```cpp:SettingValueRam.h
// SettingValueRam.h
#ifndef _H_SETTINGVALUERAM_
#define _H_SETTINGVALUERAM_

class SettingValueRam {
    private:

    public:
        SettingValueRam();
        void write();
        int read();
};

#endif	// _H_SETTINGVALUERAM_
```

---
```cpp:no_ocp_principle.cpp
#include <iostream>
using namespace std;
#include "Boot.h"

int main() {
    Boot* boot = new Boot();

    cout << "SettingValue = " << boot->readSettingValue() << endl;

    delete boot;

    return 0;
}
```

```
実行結果
$ ./no_ocp_principle.app 
SettingValue = 123
```

---
変更の方針としてつぎが考えられる

* 既存の機能提供側のコードに新仕様を実装する
* 仕様変更のモジュールを追加し、機能を使う側でどちらの機能を使うか選択する

---
▪️既存の機能提供側のコードに新仕様を実装する場合
![bg right width:620px height:640px](img/前回設定値の反映_既存機能へ追加.png)

* 既存の機能提供側とはSettingValueRamのこと。
ここにSettingValueSpiRamの機能を追加する。

* SettingValueRam内部でSettingValueSpiRamの機能を切り替えて使用する。

---
▪既存の機能提供側のコードに新仕様を実装する場合
機能を使う側で選択する場合 [no_ocp_principle_server_dirty](https://github.com/grace2riku/solid_principle_example/tree/main/4_open_closed_principle/no_ocp_principle_server_dirty)
```cpp:SettingValueRam.cpp
//SettingValueRam.cpp
#include "SettingValueRam.h"
// コンストラクタの実装
SettingValueRam::SettingValueRam(eSettingValueRamType eSettingValueRamType) {
    _eSettingValueRamType = eSettingValueRamType;
}
void SettingValueRam::write() {
    if (_eSettingValueRamType == eSettingValueRamType::Ram) {
        // SettingValueRamのロジック
    } else {
        // SettingValueSpiRamのロジック
    }
}
int SettingValueRam::read() {
    if (_eSettingValueRamType == eSettingValueRamType::Ram) {
        // SettingValueRamのロジック
        return 123;
    } else {
        // SettingValueSpiRamのロジック
        return 456;
    }
}
```

---
```cpp:SettingValueRam.h
// SettingValueRam.h
#ifndef _H_SETTINGVALUERAM_
#define _H_SETTINGVALUERAM_

enum class eSettingValueRamType
{
    Ram,
    SpiRam,
};

class SettingValueRam {
    private:
        eSettingValueRamType _eSettingValueRamType;

    public:
        SettingValueRam(eSettingValueRamType eSettingValueRamType);
        void write();
        int read();
};
#endif	// _H_SETTINGVALUERAM_
```

---
```cpp:Boot.cpp
// Boot.cpp
#include "Boot.h"

// コンストラクタの実装
Boot::Boot() {
//    _settingValue = new SettingValueRam(eSettingValueRamType::Ram);
    _settingValue = new SettingValueRam(eSettingValueRamType::SpiRam);
}

Boot::~Boot() {
    delete _settingValue;
}

int Boot::readSettingValue() {
    return _settingValue->read();
}
```

---
```cpp:Boot.h
// Boot.h
#ifndef _H_BOOT_
#define _H_BOOT_
#include "SettingValueRam.h"
class Boot {
    private:
        SettingValueRam* _settingValue;
    public:
        Boot();
        ~Boot();
        int readSettingValue();
};
#endif	// _H_BOOT_
```

```実行結果
// 実行結果
$ ./no_ocp_principle_server_dirty.app 
SettingValue = 456 // eSettingValueRamType::SpiRam選択時
```

---
既存の機能提供側のコードに新仕様を実装してみた。
この実装はつぎの特徴がある。

* 既存機能と新機能が混在している。
単一責務の原則の観点からオススメしない。

* 既存機能と新機能が混在していることから機能切り替えの分岐が発生する。
コードが汚くなる。機能のバリエーションが増えると複雑度が増す。
→修正に閉じれていない。

---
▪️仕様変更のモジュールを追加し、機能を使う側でどちらの機能を使うか選択する場合
![bg right width:620px height:640px](img/前回設定値の反映classNG.png)
* 仕様変更部分を実装するクラスを追加する（SettingValueSpiRam）
* 機能を使う側で機能を選択する（Boot.cpp）

---
機能を使う側で選択する場合 [no_ocp_principle_client_dirty](https://github.com/grace2riku/solid_principle_example/tree/main/4_open_closed_principle/no_ocp_principle_client_dirty)

```cpp:Boot.cpp
// Boot.cpp
#include "Boot.h"

// コンストラクタの実装
Boot::Boot() {
    if (settingValueSelect) {
        _settingValue = new SettingValueRam();
    } else {
        _settingValueSpiRam = new SettingValueSpiRam();
    }
}

Boot::~Boot() {
    if (settingValueSelect) {
        delete _settingValue;
    } else {
        delete _settingValueSpiRam;
    }
}

int Boot::readSettingValue() {
    if (settingValueSelect) {
        return _settingValue->read();
    } else {
        return _settingValueSpiRam->read();
    }
}
```

---
```cpp:Boot.h
// Boot.h
#ifndef _H_BOOT_
#define _H_BOOT_

#include "SettingValueRam.h"
#include "SettingValueSpiRam.h"

class Boot {
    private:
        SettingValueRam* _settingValue;
        SettingValueSpiRam* _settingValueSpiRam;

    public:
        int settingValueSelect = 0;

        Boot();
        ~Boot();
        int readSettingValue();
};

#endif	// _H_BOOT_
```

---
```cpp:SettingValueSpiRam.cpp
// SettingValueSpiRam.cpp
#include "SettingValueSpiRam.h"

// コンストラクタの実装
SettingValueSpiRam::SettingValueSpiRam() {
}

void SettingValueSpiRam::write() {
}

int SettingValueSpiRam::read() {
    return 456;
}
```

---
```cpp:SettingValueSpiRam.h
// SettingValueSpiRam.h
#ifndef _H_SETTINGVALUESPIRAM_
#define _H_SETTINGVALUESPIRAM_

class SettingValueSpiRam {
    private:

    public:
        SettingValueSpiRam();
        void write();
        int read();
};

#endif	// _H_SETTINGVALUESPIRAM_
```

```
実行結果
$ ./no_ocp_principle_client_dirty.app 
SettingValue = 456
```

---
仕様変更のモジュールを追加し、機能を使う側でどちらの機能を使うか選択するようにしてみた。
この実装はつぎの特徴がある。

* 既存機能と新機能は分離した。
→拡張に開かれていそうだが・・・

* 機能を使う側は既存機能と新機能を切り替えるための分岐が発生する。
コードが汚くなる。機能のバリエーションが増えると複雑度が増す。
→修正に閉じれていない。


# 原則に則った例
<!--
_footer: "" 
-->

**開放閉鎖の原則**に則るにはどうすれば良いのか?
原則に則れない理由を改めて考えてみる。

![bg right width:620px height:640px](img/前回設定値の反映classNG.png)

既存のクラス（SettingValueRam）と追加したクラス（SettingValueSpiRam）を**同一視できていないこと**が理由として挙げられそう。

---
同一視できていない（SettingValueRamとSettingValueSpiRamを同じように扱えない）ために機能を利用する側でどちらの機能を利用するかの分岐が必要になる。
結果、修正に閉じることができなくなり、開放閉鎖の原則に則ることができない。

同一視するための技術として次がある（他にもあるかも・・・）。
* C++: virtualでInterfaceのような動きを実現する。
* C: 関数ポインタで動作する関数を動的に切り替える
* C#: Interface, abstrct（抽象クラス）

今回はC++でvirttualを使い、Interfaceのような動きでクラスを同一視する。

---
![bg right width:640px height:640px](img/前回設定値の反映class.png)
* SettingValueRamとSettingValuSpiRamを同一視するためにInterfaceを使う。

---
原則に則った例 [ocp_principle_factories](https://github.com/grace2riku/solid_principle_example/tree/main/4_open_closed_principle/ocp_principle_factories)

```cpp:ISettingValue.h
// ISettingValue.h
#ifndef _H_ISETTINGVALUE_
#define _H_ISETTINGVALUE_

#include <iostream>
using namespace std;

class ISettingValue {
    public:
        virtual void write() = 0;
        virtual int read() = 0;

        // 仮想デストラクタ
        virtual ~ISettingValue(){
            cout << "ISettingValue destructor" << endl;
        }
};
#endif	// _H_ISETTINGVALUE_
```

---
```cpp:SettingValueRam.h
// SettingValueRam.h
#ifndef _H_SETTINGVALUERAM_
#define _H_SETTINGVALUERAM_

#include "ISettingValue.h"

class SettingValueRam : public ISettingValue {
    private:

    public:
        SettingValueRam();
        ~SettingValueRam();
        void write();
        int read();
};

#endif	// _H_SETTINGVALUERAM_
```

---
```cpp:SettingValueSpiRam.h
// SettingValueSpiRam.h
#ifndef _H_SETTINGVALUESPIRAM_
#define _H_SETTINGVALUESPIRAM_

#include "ISettingValue.h"

class SettingValueSpiRam : public ISettingValue {
    private:

    public:
        SettingValueSpiRam();
        ~SettingValueSpiRam();
        void write();
        int read();
};

#endif	// _H_SETTINGVALUESPIRAM_
```

---
```cpp:Boot.h
// Boot.h
#ifndef _H_BOOT_
#define _H_BOOT_

#include "ISettingValue.h"

class Boot {
    private:
        ISettingValue* _settingValue;

    public:
        Boot();
        ~Boot();
        int readSettingValue();
};

#endif	// _H_BOOT_
```

---
```cpp:Boot.cpp
// Boot.cpp
#include "Boot.h"
#include "Factories.h"

#include <iostream>
using namespace std;

// コンストラクタの実装
Boot::Boot() {
    cout << "Boot constructor" << endl;

    _settingValue = Factories::CreateSettingValue();
}

Boot::~Boot() {
    cout << "Boot destructor" << endl;

    delete _settingValue;
}

int Boot::readSettingValue() {
    return _settingValue->read();
}
```

---
```cpp:Factories.cpp
// Factories.cpp
#include "Factories.h"
#include "ISettingValue.h"
#include "SettingValueRam.h"
#include "SettingValueSpiRam.h"

ISettingValue* Factories::CreateSettingValue() {
//    return new SettingValueRam();
    return new SettingValueSpiRam();
}
```

---
```cpp:Factories.h
#ifndef _H_FACTORIES_
#define _H_FACTORIES_

#include "ISettingValue.h"

class Factories {
    public: 
        static ISettingValue* CreateSettingValue();
};

#endif	// _H_FACTORIES_
```

```cpp:Factories.h
// 実行結果
$ ./ocp_principle_factories.app 
SettingValue = 456
```

---
* Interfaceを使うことで2つのクラスを同一視できた。結果、開放閉鎖の原則に則ることができた。

* クラスを生成する責務を持つFactoryを導入した。



# 今回の設計所感
* 長く使われているもの・システムは開放閉鎖の原則に則っていることが多いことに気づいた。
例）USB、ACアダプタ
* 開放閉鎖の原則はソフトウェア設計だけではなく、システムやものを長く使うために広く使える考え方のフレームワークだと感じた。覚えやすく、シンプルな原則でこの原則を言語化してくれた偉人に感謝したい🙏

---
* 設計原則の適用は課題解決に効果的だと思う。課題がないのに初めから原則を適用するとソフトウェアの構造を複雑にする可能性もあると感じた。技術駆動にならないよう気をつけたいと感じた。
ここでいう技術駆動はつぎのようなイメージ。

Interfaceの使い方を覚えたから特に課題はないけど、実際の開発現場で適用してみよう、という感じ。

* 原則を適用する前の**対象製品を分析すること**が重要ではないかと感じた。製品のバリエーションが増えることがわかっていれば最初から原則を意識して拡張に開いて、修正に閉じる構造にしておくことが効果的と感じた。


---
* 今回はC++で開放閉鎖の原則の説明だった。参考資料3ではCで開放閉鎖の原則違反の課題、原則を適用する過程を紹介しているので共有する。ライセンスの関係でコードを掲載、紹介できなかったが一見の価値ありだと思っている。

[テスト駆動開発による組み込みプログラミング―C言語とオブジェクト指向で学ぶアジャイルな設計](https://www.oreilly.co.jp/books/9784873116143/)

該当ページ: 
11章 SOLIDで柔軟でテストしやすい設計
11.3 要求の進化と問題のある設計〜11.4.7 詳細を隠蔽する　

---
著者の方がGitHubにコードをアップロードしている。
dockerでテスト駆動開発の環境構築できるようです（有難い😄）。

[tddec-code](https://github.com/jwgrenning/tddec-code)

書籍の該当ページと合わせてcode-t1、code-t2ディレクトリの差分を見ていくと開放閉鎖の原則の観点でコードが改善されていく様子がわかるのでオススメ👍


# 設計についてのディスカッション・質問
<!--
_footer: "" 
-->

- 自分以外の設計の視点が学びになると個人的に考えています。
ぜひぜひお気軽にフィードバックをよろしくお願いします🙇

- こちらに学習の振り返りに使う目的でZennのスクラップを用意しました。
活用ください。

[【SOLID原則】#4 "開放閉鎖の原則（dependency inversion principle）"の勉強会後の振り返り](https://zenn.dev/k_abe/scraps/ede23a2ab89ae6)


# 参考資料
<!--
_footer: "" 
-->
1. [オブジェクト指向の原則１：単一責務の原則とオープンクローズドの原則](https://www.udemy.com/course/objectfive1/)
Udemyの講座。作成者はピーコック アンダーソンさん。オープンクローズドの原則以外のSOLID原則の講座もあり。

2. [オブジェクト指向習得のための５ステップ【SOLID原則】](https://qiita.com/taktt7/items/af90960f580373f3bb9b)

3. [テスト駆動開発による組み込みプログラミング―C言語とオブジェクト指向で学ぶアジャイルな設計](https://www.oreilly.co.jp/books/9784873116143/)



---

ご清聴ありがとうございました🙇