#pragma once
#include <unordered_map>

std::unordered_set<USHORT> sChineseLangIds{ 0x0004, 0x0804, 0x1004 };  // zh-Hans, zh-CN, zh-SG
std::unordered_set<USHORT> tChineseLangIds{ 0x0404, 0x0c04, 0x1404, 0x048E };  // zh-TW, zh-HK, zh-MO, zh-yue-HK
std::unordered_set<USHORT> japaneseLangIds{ 0x0011, 0x0411 };  // ja, ja-JP

namespace GuiTrans {
	enum class GUILangType
	{
		ENGLISH,
		SCHINESE,
		TCHINESE,
		JPN
	};

	extern auto GuiLanguage = GUILangType::ENGLISH;

	const std::unordered_map<std::string_view, std::string> guiSChineseTrans{
		{"GateNo/CharaName", "闸号/角色名"},
		{"Rank/Distance", "排名/移动距离"},
		{"DistanceFrom Front/First", "距前一名/第一名的距离"},
		{"InstantSpeed", "瞬时速度"},
		{"Rate", "当前速率"},
		{"HP Left", "剩余体力"},
		{"IsLastSpurt/Start Distance", "是否最终冲刺/冲刺开始距离"},
		{"LastSpeed", "前一刻速度"},
		{"Speed", "速度"},
		{"Stamina", "耐力"},
		{"Pow", "力量"},
		{"Power", "力量"},
		{"Guts", "根性"},
		{"Wiz", "智力"},
		{"MinSpeed", "最低速度"},
		{"RaceBaseSpeed", "比赛基础速度"},
		{"StartDashSpeedThreshold", "开始冲刺速度阈值"},
		{"BaseSpeed", "基础速度值"},
		{"RawSpeed", "原始速度值"},
		{"BaseStamina", "基础体力值"},
		{"RawStamina", "原始体力值"},
		{"BasePow", "基础力量值"},
		{"RawPow", "原始力量值"},
		{"BaseGuts", "基础根性值"},
		{"RawGuts", "原始根性值"},
		{"BaseWiz", "基础智力值"},
		{"RawWiz", "原始智力值"},
		{"MoveDistance", "移动距离(帧)"},
		{"RunMotionSpeed", "RunMotionSpeed"},  // 不会翻(
		{"RaceBaseSpeed", "比赛基础速度"},
		{"Keep Top", "保持窗口最上层"},
		{"Auto Close Window", "自动关闭窗口"},
		{"Show km/h", "以 km/h 显示速度"},
		{"Ignore Negative Speed", "忽略负数移动速度"},
		{"Gate/Name", "闸号/角色名"},
		{"Skill", "技能"},
		{"AbilityType", "效果类型"},
		{"Value", "值"},
		{"Targets", "生效目标"},
		{"CoolDownTime", "冷却时间"},
		{"RunningStyleExOonige", "RunningStyleExOonige"},
		{"HpDecRate", "减少体力百分比"},
		{"VisibleDistance", "可视距离"},
		{"HpRate", "体力百分比"},
		{"StartDash", "开始冲刺"},
		{"ForceOvertakeIn", "ForceOvertakeIn"},
		{"ForceOvertakeOut", "ForceOvertakeOut"},
		{"TemptationEndTime", "TemptationEndTime"},
		{"StartDelayFix", "StartDelayFix"},
		{"CurrentSpeed", "即时速度"},
		{"CurrentSpeedWithNaturalDeceleration", "提升即时速度, 逐渐递减"},
		{"TargetSpeed", "目标速度"},
		{"LaneMoveSpeed", "切换跑道速度"},
		{"TemptationPer", "TemptationPer"},
		{"PushPer", "PushPer"},
		{"Accel", "加速度"},
		{"AllStatus", "全属性提升"},
		{"TargetLane", "切换跑道"},
		{"ActivateRandomNormalAndRareSkill", "随机激活普通技能和稀有技能"},
		{"ActivateRandomRareSkill", "随机激活稀有技能"},
		{"DebuffCancel", "消除 Debuff"},
		{"DebuffAbilityValueMultiply", "Debuff 数值加倍"},
		{"DebuffAbilityValueMultiplyOtherActivate", "DebuffAbilityValueMultiplyOtherActivate"},  // 不会翻(

		{"Self", "自身"},
		{"All", "所有角色"},
		{"AllOtherSelf", "所有除自身以外的"},
		{"Visible", "可见的"},
		{"RandomOtherSelf", "随机除自身以外的"},
		{"Order", "指定排名"},
		{"OrderInfront", "排名在自身之前的"},
		{"OrderBehind", "排名在自身之后的"},
		{"SelfInfront", "在自身前面的"},
		{"SelfBehind", "在自身后面的"},
		{"TeamMember", "队友"},
		{"Near", "附近的"},
		{"SelfAndBlockFront", "自身和在前方阻挡的"},
		{"BlockSide", "侧方阻挡的"},
		{"NearInfront", "靠近自身前面的"},
		{"NearBehind", "靠近自身后面的俄"},
		{"RunningStyle", "指定跑法的"},
		{"RunningStyleOtherSelf", "其他角色指定跑法的"},
		{"SelfInfrontTemptation", "SelfInfrontTemptation"},
		{"SelfBehindTemptation", "SelfBehindTemptation"},
		{"RunningStyleTemptationOtherSelf", "RunningStyleTemptationOtherSelf"},
		{"CharaId", "指定角色 ID"},
		{"ActivateHealSkill", "激活治疗技能"},

		{"Option", "选项"},
		{"Effects", "效果"},
		{"On Success:", "成功时:"},
		{"On Failed:", "失败时:"},
	};

	const std::unordered_map<std::string_view, std::string> guiTChineseTrans{
		{"GateNo/CharaName", "閘號/角色名"},
		{"Rank/Distance", "排名/移動距離"},
		{"DistanceFrom Front/First", "與前一名/第一名的距離"},
		{"InstantSpeed", "瞬時速度"},
		{"Rate", "當前速率"},
		{"HP Left", "剩餘體力"},
		{"IsLastSpurt/Start Distance", "是否最終衝刺/衝刺開始距離"},
		{"LastSpeed", "前一刻速度"},
		{"Speed", "速度"},
		{"Stamina", "耐久力"},
		{"Pow", "力量"},
		{"Power", "力量"},
		{"Guts", "意志力"},
		{"Wiz", "智力"},
		{"MinSpeed", "最低速度"},
		{"RaceBaseSpeed", "比賽基礎速度"},
		{"StartDashSpeedThreshold", "開始衝刺速度閾值"},
		{"BaseSpeed", "基礎速度值"},
		{"RawSpeed", "原始速度值"},
		{"BaseStamina", "基礎耐久力值"},
		{"RawStamina", "原始耐久力值"},
		{"BasePow", "基礎力量值"},
		{"RawPow", "原始力量值"},
		{"BaseGuts", "基礎意志力值"},
		{"RawGuts", "原始意志力值"},
		{"BaseWiz", "基礎智力值"},
		{"RawWiz", "原始智力值"},
		{"MoveDistance", "移動距離(幀)"},
		{"RunMotionSpeed", "RunMotionSpeed"},  // 不會翻(
		{"RaceBaseSpeed", "比賽基礎速度"},
		{"Keep Top", "視窗置頂"},
		{"Auto Close Window", "自動關閉視窗"},
		{"Show km/h", "以 km/h 顯示速度"},
		{"Ignore Negative Speed", "忽略負數移動速度"},
		{"Gate/Name", "閘號/角色名"},
		{"Skill", "技能"},
		{"AbilityType", "效果類型"},
		{"Value", "值"},
		{"Targets", "生效目標"},
		{"CoolDownTime", "冷卻時間"},
		{"RunningStyleExOonige", "RunningStyleExOonige"},
		{"HpDecRate", "減少體力百分比"},
		{"VisibleDistance", "可視距離"},
		{"HpRate", "體力百分比"},
		{"StartDash", "開始衝刺"},
		{"ForceOvertakeIn", "ForceOvertakeIn"},
		{"ForceOvertakeOut", "ForceOvertakeOut"},
		{"TemptationEndTime", "TemptationEndTime"},
		{"StartDelayFix", "StartDelayFix"},
		{"CurrentSpeed", "即時速度"},
		{"CurrentSpeedWithNaturalDeceleration", "提升即時速度, 逐漸遞減"},
		{"TargetSpeed", "目標速度"},
		{"LaneMoveSpeed", "切換跑道速度"},
		{"TemptationPer", "TemptationPer"},
		{"PushPer", "PushPer"},
		{"Accel", "加速度"},
		{"AllStatus", "全屬性提升"},
		{"TargetLane", "切換跑道"},
		{"ActivateRandomNormalAndRareSkill", "隨機啟動普通技能和稀有技能"},
		{"ActivateRandomRareSkill", "隨機啟動稀有技能"},
		{"DebuffCancel", "消除 Debuff"},
		{"DebuffAbilityValueMultiply", "Debuff 數值加倍"},
		{"DebuffAbilityValueMultiplyOtherActivate", "DebuffAbilityValueMultiplyOtherActivate"},  // 不會翻(

		{"Self", "自身"},
		{"All", "所有角色"},
		{"AllOtherSelf", "所有除自身以外的"},
		{"Visible", "可見的"},
		{"RandomOtherSelf", "隨機除自身以外的"},
		{"Order", "指定排名"},
		{"OrderInfront", "排名在自身之前的"},
		{"OrderBehind", "排名在自身之後的"},
		{"SelfInfront", "在自身前面的"},
		{"SelfBehind", "在自身後面的"},
		{"TeamMember", "隊友"},
		{"Near", "附近的"},
		{"SelfAndBlockFront", "自身和在前方阻擋的"},
		{"BlockSide", "側方阻擋的"},
		{"NearInfront", "靠近自身前面的"},
		{"NearBehind", "靠近自身後面的"},
		{"RunningStyle", "指定跑法的"},
		{"RunningStyleOtherSelf", "其他角色指定跑法的"},
		{"SelfInfrontTemptation", "SelfInfrontTemptation"},
		{"SelfBehindTemptation", "SelfBehindTemptation"},
		{"RunningStyleTemptationOtherSelf", "RunningStyleTemptationOtherSelf"},
		{"CharaId", "指定角色 ID"},
		{"ActivateHealSkill", "激活治療技能"},

		{"Option", "選項"},
		{"Effects", "效果"},
		{"On Success:", "成功時:"},
		{"On Failed:", "失敗時:"},
	};


	const std::unordered_map<std::string_view, std::string> guiJPNTrans{
		{"GateNo/CharaName", "ゲート番号/ウマ娘の名前"},
		{"Rank/Distance", "順位/移動距離"},
		{"DistanceFrom Front/First", "先頭/1位からの距離"},
		{"InstantSpeed", "瞬間速度"},
		{"Rate", "スピードのレート"},
		{"HP Left", "残りのHP"},
		{"IsLastSpurt/Start Distance", "ラストスパート/スタートの距離"},
		{"LastSpeed", "直前のスピード"},
		{"Speed", "スピード"},
		{"Stamina", "スタミナ"},
		{"Pow", "パワー"},
		{"Power", "パワー"},
		{"Guts", "根性"},
		{"Wiz", "賢さ"},
		{"MinSpeed", "最小の速度"},
		{"RaceBaseSpeed", "レースの基本速度"},
		{"StartDashSpeedThreshold", "スタートダッシュ速度のしきい値"},
		{"BaseSpeed", "基本のスピード"},
		{"RawSpeed", "元のスピード"},
		{"BaseStamina", "基本のスタミナ"},
		{"RawStamina", "元のスタミナ"},
		{"BasePow", "基本のパワー"},
		{"RawPow", "元のパワー"},
		{"BaseGuts", "基本の根性"},
		{"RawGuts", "元の根性"},
		{"BaseWiz", "基本の賢さ"},
		{"RawWiz", "元の賢さ"},
		{"MoveDistance", "移動距離 (フレーム)"},
		{"RunMotionSpeed", "RunMotionSpeed"},
		{"RaceBaseSpeed", "レースの基本速度"},
		{"Keep Top", "ウィンドウを常に手前に表示"},
		{"Auto Close Window", "ウィンドウを自動で閉じる"},
		{"Show km/h", "速度をkm/hで表示"},
		{"Ignore Negative Speed", "ネガティブ移動速度を無視"},
		{"Gate/Name", "ゲート/名前"},
		{"Skill", "スキル"},
		{"AbilityType", "効果の種類"},
		{"Value", "値"},
		{"Targets", "ターゲット"},
		{"CoolDownTime", "クールダウンタイム"},
		{"RunningStyleExOonige", "RunningStyleExOonige"},
		{"HpDecRate", "HP減少率 (%)"},
		{"VisibleDistance", "距離の可視"},
		{"HpRate", "HPのパーセンテージ"},
		{"StartDash", "スタートダッシュ"},
		{"ForceOvertakeIn", "ForceOvertakeIn"},
		{"ForceOvertakeOut", "ForceOvertakeOut"},
		{"TemptationEndTime", "TemptationEndTime"},
		{"StartDelayFix", "StartDelayFix"},
		{"CurrentSpeed", "現在の速度"},
		{"CurrentSpeedWithNaturalDeceleration", "現在のスピードを上昇、徐々に降下"},
		{"TargetSpeed", "ターゲットの速度"},
		{"LaneMoveSpeed", "レーン変更速度"},
		{"TemptationPer", "TemptationPer"},
		{"PushPer", "PushPer"},
		{"Accel", "加速度"},
		{"AllStatus", "すべてのステータス向上"},
		{"TargetLane", "ターゲットのレーンを変更"},
		{"ActivateRandomNormalAndRareSkill", "ランダムで通常とレアスキルを発動"},
		{"ActivateRandomRareSkill", "ランダムでレアスキルを発動"},
		{"DebuffCancel", "デバフのキャンセル"},
		{"DebuffAbilityValueMultiply", "デバフ能力値倍増"},
		{"DebuffAbilityValueMultiplyOtherActivate", "DebuffAbilityValueMultiplyOtherActivate"},

		{"Self", "自分"},
		{"All", "すべてのウマ娘"},
		{"AllOtherSelf", "自分以外のすべて"},
		{"Visible", "可視"},
		{"RandomOtherSelf", "自分以外ランダム"},
		{"Order", "指定の順位"},
		{"OrderInfront", "自分の前の順位"},
		{"OrderBehind", "自分の後の順位"},
		{"SelfInfront", "自分の前"},
		{"SelfBehind", "自分の後ろ"},
		{"TeamMember", "チームメンバー"},
		{"Near", "近く"},
		{"SelfAndBlockFront", "自分と前方をブロック"},
		{"BlockSide", "横方向にブロック"},
		{"NearInfront", "自分の前方付近"},
		{"NearBehind", "自分の後方付近"},
		{"RunningStyle", "指定された走行スタイル"},
		{"RunningStyleOtherSelf", "他の指定されたウマ娘の走法"},
		{"SelfInfrontTemptation", "SelfInfrontTemptation"},
		{"SelfBehindTemptation", "SelfBehindTemptation"},
		{"RunningStyleTemptationOtherSelf", "RunningStyleTemptationOtherSelf"},
		{"CharaId", "指定されたウマ娘のID"},
		{"ActivateHealSkill", "回復スキルの発動"},

		{"Option", "選択肢"},
		{"Effects", "結果"},
		{"On Success:", "成功:"},
		{"On Failed:", "失敗:"},
	};

	const char* GetTrans(const char* text) {
		switch (GuiLanguage)
		{
		case GuiTrans::GUILangType::ENGLISH:
			break;
		case GuiTrans::GUILangType::SCHINESE: {
			if (const auto iter = guiSChineseTrans.find(std::string_view(text)); iter != guiSChineseTrans.end()) {
				return iter->second.c_str();
			}
		}; break;
		case GuiTrans::GUILangType::TCHINESE: {
			if (const auto iter = guiTChineseTrans.find(std::string_view(text)); iter != guiTChineseTrans.end()) {
				return iter->second.c_str();
			}
		}; break;
		case GuiTrans::GUILangType::JPN: {
			if (const auto iter = guiJPNTrans.find(std::string_view(text)); iter != guiTChineseTrans.end()) {
				return iter->second.c_str();
			}
		}; break;
		default:
			break;
		}
		return text;
	}

	int checkDefaultLang() {
		const auto localLang = GetUserDefaultUILanguage();
		if (sChineseLangIds.contains(localLang)) {
			return 1;
		}
		else if (tChineseLangIds.contains(localLang)) {
			return 2;
		}
		else if (japaneseLangIds.contains(localLang)) {
			return 3;
		}
		return 0;
	}

}
