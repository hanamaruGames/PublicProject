#include "BgmManager.h"
#include "debugScreen.h"

BgmManager::BgmManager(SceneBase* _scene)
{
}

BgmManager::~BgmManager()
{
}

void BgmManager::Update()
{
}

void BgmManager::Draw()
{
}

void BgmManager::DebugUpdate()
{
	if (CheckHitKey(KEY_INPUT_Z) == 1) {
		PlaySoundFile(csvReader->GetString(1, 1).c_str(), DX_PLAYTYPE_BACK);
	}
}

void BgmManager::DebugDraw()
{
	DrawFormatString(0, 100, 0xffffff, "ぬ");


}

void BgmManager::ReserveSound(int _ID)
{
	//データロード時、配列より ID値が大きい場合 配列を追加する
	while (data.size() <= _ID) {
		Data d;
		data.emplace_back(d);
	}
	Data d;
	d.hSound = LoadSoundMem(csvReader->GetString(1, 1).c_str());
}

void BgmManager::RreleaseSound(int _ID)
{
}

void BgmManager::StartSound(int _ID, int _fadeTime, bool isReset)
{
}

void BgmManager::StopSound(int _ID, int _fadeTime)
{
}

void BgmManager::SetLoop(int _ID, int _isLoop)
{
}

void BgmManager::ChangeVolumeSlave(int _vol)
{
}

