// stdafx.h : �W���̃V�X�e�� �C���N���[�h �t�@�C���̃C���N���[�h �t�@�C���A�܂���
// �Q�Ɖ񐔂������A�����܂�ύX����Ȃ��A�v���W�F�N�g��p�̃C���N���[�h �t�@�C��
// ���L�q���܂��B
//

#pragma once

// Windows �w�b�_�[ �t�@�C���Ŏg�p�����}�N��
// ---------------------------------------------------------------------------------|
// �K�v�ȍŏ��V�X�e��							| _WIN32_WINNT �� WINVER �̍ŏ��l	|
// ---------------------------------------------------------------------------------|
// Windows 10									| _WIN32_WINNT_WIN10	(0x0A00)	|
// Windows 8.1									| _WIN32_WINNT_WINBLUE	(0x0603)	|
// Windows 8									| _WIN32_WINNT_WIN8		(0x0602)	|
// Windows 7									| _WIN32_WINNT_WIN7		(0x0601)	|
// Windows Server 2008							| _WIN32_WINNT_WS08		(0x0600)	|
// Windows Vista								| _WIN32_WINNT_VISTA	(0x0600)	|	
// Windows Server 2003 SP1�AWindows XP(SP2)		| _WIN32_WINNT_WS03		(0x0502)	|
// Windows Server 2003�AWindows XP				| _WIN32_WINNT_WINXP	(0x0501)	|
// ---------------------------------------------------------------------------------|
// GetTickCount64() ���g�p�ł���̂�VISA �ȍ~
// USB �A�C�\�N���i�X�]���� Windows8.1 �ȍ~
// �Ȃ̂�Windows8.1 �ȍ~�Ńr���h����

#define _WIN32_WINNT _WIN32_WINNT_VISTA
#include <SDKDDKVer.h>

#ifndef _WIN32_IE			// IE 6.0 �ȍ~�̃o�[�W�����ɌŗL�̋@�\�̎g�p�������܂��B
#define _WIN32_IE 0x0600	// ����� IE. �̑��̃o�[�W���������ɓK�؂Ȓl�ɕύX���Ă��������B
#endif

#define WIN32_LEAN_AND_MEAN		// Windows �w�b�_�[����g�p����Ă��Ȃ����������O���܂��B
// Windows �w�b�_�[ �t�@�C��:
#include <Windows.h>
#include <crtdbg.h>


// TODO: �v���O�����ɕK�v�Ȓǉ��w�b�_�[�������ŎQ�Ƃ��Ă��������B

// �x���̖����ݒ�
#pragma warning(disable: 4355) // warning C4355: "'this' : �x�[�X �����o���������X�g�Ŏg�p����܂����B"
#pragma warning(disable: 4996) // warning C4996: "This function or variable may be unsafe. Consider using _wsplitpath_s instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details"
