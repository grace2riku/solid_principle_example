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
> 参考資料2より引用

- 凝集度が高くなる
- 他のモジュールと疎結合になる
- 各モジュールの目的が明確に分けられると、コード変更の際の影響は局所化される。結果、テストしやすい設計になる。

上記の特徴を持つと再利用しやすいコードになる。


# 開放閉鎖の原則（open/closed principle）について
<!--
_footer: "" 
-->
拡張に開かれており（Open）、変更に閉じられていること（Closed）。

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

---
日常にある【開放閉鎖】の例
▪️Apple ACアダプタ

---
日常にある【開放閉鎖】の例
▪️apt-getコマンド

---
日常にある【開放閉鎖】の例
▪️その他
* 家庭のコンセント
* アイフルCM 【そこに愛はあるんか?】のシリーズ
* マクドナルド ハッピーセット リカちゃん

# 原則違反の例
<!--
_footer: "" 
-->


# 原則に則った例
<!--
_footer: "" 
-->


# 今回の設計所感


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