// stdafx.h : 標準のシステム インクルード ファイルのインクルード ファイル、または
// 参照回数が多く、かつあまり変更されない、プロジェクト専用のインクルード ファイル
// を記述します。
//

#pragma once

#ifndef _WIN32_WINNT		// Windows XP 以降のバージョンに固有の機能の使用を許可します。                   
#define _WIN32_WINNT 0x0501	// これを Windows の他のバージョン向けに適切な値に変更してください。
#endif						

#define WIN32_LEAN_AND_MEAN		// Windows ヘッダーから使用されていない部分を除外します。


// Windows ヘッダー ファイル:
#include <Windows.h>
#include <crtdbg.h>


// TODO: プログラムに必要な追加ヘッダーをここで参照してください。

// 警告の無効設定
#pragma warning(disable: 4996) // warning C4996: "This function or variable may be unsafe. Consider using _wsplitpath_s instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details"
