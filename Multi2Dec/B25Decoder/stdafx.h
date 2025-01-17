// stdafx.h : 標準のシステム インクルード ファイルのインクルード ファイル、または
// 参照回数が多く、かつあまり変更されない、プロジェクト専用のインクルード ファイル
// を記述します。
//

#pragma once

// Windows ヘッダー ファイルで使用されるマクロ
// ---------------------------------------------------------------------------------|
// 必要な最小システム							| _WIN32_WINNT と WINVER の最小値	|
// ---------------------------------------------------------------------------------|
// Windows 10									| _WIN32_WINNT_WIN10	(0x0A00)	|
// Windows 8.1									| _WIN32_WINNT_WINBLUE	(0x0603)	|
// Windows 8									| _WIN32_WINNT_WIN8		(0x0602)	|
// Windows 7									| _WIN32_WINNT_WIN7		(0x0601)	|
// Windows Server 2008							| _WIN32_WINNT_WS08		(0x0600)	|
// Windows Vista								| _WIN32_WINNT_VISTA	(0x0600)	|	
// Windows Server 2003 SP1、Windows XP(SP2)		| _WIN32_WINNT_WS03		(0x0502)	|
// Windows Server 2003、Windows XP				| _WIN32_WINNT_WINXP	(0x0501)	|
// ---------------------------------------------------------------------------------|
// GetTickCount64() を使用できるのはVISA 以降
// USB アイソクロナス転送は Windows8.1 以降
// なのでWindows8.1 以降でビルドする

#define _WIN32_WINNT _WIN32_WINNT_VISTA
#include <SDKDDKVer.h>

#ifndef _WIN32_IE			// IE 6.0 以降のバージョンに固有の機能の使用を許可します。
#define _WIN32_IE 0x0600	// これを IE. の他のバージョン向けに適切な値に変更してください。
#endif

#define WIN32_LEAN_AND_MEAN		// Windows ヘッダーから使用されていない部分を除外します。
// Windows ヘッダー ファイル:
#include <Windows.h>
#include <crtdbg.h>


// TODO: プログラムに必要な追加ヘッダーをここで参照してください。

// 警告の無効設定
#pragma warning(disable: 4355) // warning C4355: "'this' : ベース メンバ初期化リストで使用されました。"
#pragma warning(disable: 4996) // warning C4996: "This function or variable may be unsafe. Consider using _wsplitpath_s instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details"
