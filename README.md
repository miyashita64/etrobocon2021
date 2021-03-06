# etrobocon2021
KatLabが開発する[ETロボコン2021](https://www.etrobo.jp/) (アドバンストクラス) のリポジトリです。


## 開発環境
- [ETロボコン公式シミュレータ](https://github.com/ETrobocon/etrobo)
- C++
- [GoogleTest](https://github.com/google/googletest)
- Git/GitHub/GitHub Actions

環境構築の詳細は、wikiを見てください。

## ビルド方法
### L コースの場合
etrobo ディレクトリで以下のコマンドを実行する  
 ```
 $ make app=etrobocon2021 sim up
 ```

etrobo/workspace/etrobocon2021 ディレクトリでビルドをしたい場合は、上記コマンドの`make`を`./make.sh`に置き換えて実行する  
```
$ ./make.sh app=etrobocon2021 sim up
```

### R コースの場合
etrobo ディレクトリで以下のコマンドを実行する  
 ```
 $ make right app=etrobocon2021 sim up
 ```

etrobo/workspace/etrobocon2021 ディレクトリでビルドをしたい場合は、上記コマンドの`make`を`./make.sh`に置き換えて実行する  
```
$ ./make.sh right app=etrobocon2021 sim up
```


## テストの実行
`~/etrobo/workspace/etrobocon2021`にある`gtest_all.sh`ファイルを実行することで、 Google Test を実行できます。

```
$ cd ~/etrobo/workspace/etrobocon2021
$ ./gtest_all.sh
```

### **!!** エラーが発生した場合

- `cmake`をインストールしていない場合

  以下のようなエラーが発生した際は、`cmake`をインストールしなければいけません。

  ```
  ./test/gtest/gtest_build.sh: 9: ./test/gtest/gtest_build.sh: cmake: not found
  ```

  Windows の場合は、 `sudo apt install cmake`を実行して`cmake`をインストールした後、もう一度`gtest_all.sh`ファイルを実行してください。

  macOS の場合は、[Homebrew](https://brew.sh/index_ja)をインストールし、`brew install cmake`を実行して`cmake`をインストールした後、もう一度`gtest_all.sh`ファイルを実行してください。


## Authors
KatLabメンバー, 宮崎大学片山徹郎研究室