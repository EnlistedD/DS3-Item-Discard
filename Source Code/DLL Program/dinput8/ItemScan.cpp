#include "ItemScan.h"

DWORD validWeapon[2869] = {
	0x00015F90, //:Torch
	0x0001ADB0, //:Fists
	0x00061A80, //:Standard Arrow
	0x00061AE4, //:Fire Arrow
	0x00061B48, //:Poison Arrow
	0x00061BAC, //:Large Arrow
	0x00061C10, //:Feather Arrow
	0x00061C74, //:Moonlight Arrow
	0x00061CD8, //:Wood Arrow
	0x00061D3C, //:Dark Arrow
	0x00062250, //:Dragonslayer Greatarrow
	0x00062318, //:Dragonslayer Lightning Arrow
	0x0006237C, //:Onislayer Greatarrow
	0x000623E0, //:Millwood Greatarrow
	0x00062A20, //:Standard Bolt
	0x00062A84, //:Heavy Bolt
	0x00062AE8, //:Sniper Bolt
	0x00062B4C, //:Wood Bolt
	0x00062BB0, //:Lightning Bolt
	0x00062C14, //:Splintering Bolt
	0x00062C78, //:Exploding Bolt
	0x000F4240, //:Dagger
	0x000F42A4, //:Heavy Dagger
	0x000F4308, //:Sharp Dagger
	0x000F436C, //:Refined Dagger
	0x000F43D0, //:Simple Dagger
	0x000F4434, //:Crystal Dagger
	0x000F4498, //:Fire Dagger
	0x000F44FC, //:Chaos Dagger
	0x000F4560, //:Lightning Dagger
	0x000F45C4, //:Deep Dagger
	0x000F4628, //:Dark Dagger
	0x000F468C, //:Poison Dagger
	0x000F46F0, //:Blood Dagger
	0x000F4754, //:Raw Dagger
	0x000F47B8, //:Blessed Dagger
	0x000F481C, //:Hollow Dagger
	0x000F6950, //:Bandit's Knife
	0x000F69B4, //:Heavy Bandit's Knife
	0x000F6A18, //:Sharp Bandit's Knife
	0x000F6A7C, //:Refined Bandit's Knife
	0x000F6AE0, //:Simple Bandit's Knife
	0x000F6B44, //:Crystal Bandit's Knife
	0x000F6BA8, //:Fire Bandit's Knife
	0x000F6C0C, //:Chaos Bandit's Knife
	0x000F6C70, //:Lightning Bandit's Knife
	0x000F6CD4, //:Deep Bandit's Knife
	0x000F6D38, //:Dark Bandit's Knife
	0x000F6D9C, //:Poison Bandit's Knife
	0x000F6E00, //:Blood Bandit's Knife
	0x000F6E64, //:Raw Bandit's Knife
	0x000F6EC8, //:Blessed Bandit's Knife
	0x000F6F2C, //:Hollow Bandit's Knife
	0x000F9060, //:Parrying Dagger
	0x000F90C4, //:Heavy Parrying Dagger
	0x000F9128, //:Sharp Parrying Dagger
	0x000F918C, //:Refined Parrying Dagger
	0x000F91F0, //:Simple Parrying Dagger
	0x000F9254, //:Crystal Parrying Dagger
	0x000F92B8, //:Fire Parrying Dagger
	0x000F931C, //:Chaos Parrying Dagger
	0x000F9380, //:Lightning Parrying Dagger
	0x000F93E4, //:Deep Parrying Dagger
	0x000F9448, //:Dark Parrying Dagger
	0x000F94AC, //:Poison Parrying Dagger
	0x000F9510, //:Blood Parrying Dagger
	0x000F9574, //:Raw Parrying Dagger
	0x000F95D8, //:Blessed Parrying Dagger
	0x000F963C, //:Hollow Parrying Dagger
	0x000FDE80, //:Rotten Ghru Dagger
	0x000FDEE4, //:Heavy Rotten Ghru Dagger
	0x000FDF48, //:Sharp Rotten Ghru Dagger
	0x000FDFAC, //:Refined Rotten Ghru Dagger
	0x000FE010, //:Simple Rotten Ghru Dagger
	0x000FE074, //:Crystal Rotten Ghru Dagger
	0x000FE0D8, //:Fire Rotten Ghru Dagger
	0x000FE13C, //:Chaos Rotten Ghru Dagger
	0x000FE1A0, //:Lightning Rotten Ghru Dagger
	0x000FE204, //:Deep Rotten Ghru Dagger
	0x000FE268, //:Dark Rotten Ghru Dagger
	0x000FE2CC, //:Poison Rotten Ghru Dagger
	0x000FE330, //:Blood Rotten Ghru Dagger
	0x000FE394, //:Raw Rotten Ghru Dagger
	0x000FE3F8, //:Blessed Rotten Ghru Dagger
	0x000FE45C, //:Hollow Rotten Ghru Dagger
	0x00100590, //:Blood-stained Short Sword
	0x001005F4, //:Heavy Blood-stained Short Sword
	0x00100658, //:Sharp Blood-stained Short Sword
	0x001006BC, //:Refined Blood-stained Short Sword
	0x00100720, //:Simpleton Blood-stained Short Sword
	0x00100784, //:Crystal Blood-stained Short Sword
	0x001007E8, //:Fire Blood-stained Short Sword
	0x0010084C, //:Chaos Blood-stained Short Sword
	0x001008B0, //:Lightning Blood-stained Short Sword
	0x00100914, //:Deep Blood-stained Short Sword
	0x00100978, //:Dark Blood-stained Short Sword
	0x001009DC, //:Poison Blood-stained Short Sword
	0x00100A40, //:Blood Blood-stained Short Sword
	0x00100AA4, //:Raw Blood-stained Short Sword
	0x00100B08, //:Blessed Blood-stained Short Sword
	0x00100B6C, //:Hollow Blood-stained Short Sword
	0x00102CA0, //:Harpe
	0x00102D04, //:Heavy Harpe
	0x00102D68, //:Sharp Harpe
	0x00102DCC, //:Refined Harpe
	0x00102E30, //:Simple Harpe
	0x00102E94, //:Crystal Harpe
	0x00102EF8, //:Fire Harpe
	0x00102F5C, //:Chaos Harpe
	0x00102FC0, //:Lightning Harpe
	0x00103024, //:Deep Harpe
	0x00103088, //:Dark Harpe
	0x001030EC, //:Poison Harpe
	0x00103150, //:Blood Harpe
	0x001031B4, //:Raw Harpe
	0x00103218, //:Blessed Harpe
	0x0010327C, //:Hollow Harpe
	0x001053B0, //:Scholar's Candlestick
	0x00105414, //:Heavy Dripping Candle Stick
	0x00105478, //:Sharp Dripping Candle Stick
	0x001054DC, //:Refined Dripping Candle Stick
	0x00105540, //:Simpleton Dripping Candle Stick
	0x001055A4, //:Crystal Dripping Candle Stick
	0x00105608, //:Fire Dripping Candle Stick
	0x0010566C, //:Chaos Dripping Candle Stick
	0x001056D0, //:Lightning Dripping Candle Stick
	0x00105734, //:Deep Dripping Candle Stick
	0x00105798, //:Dark Dripping Candle Stick
	0x001057FC, //:Poison Dripping Candle Stick
	0x00105860, //:Blood Dripping Candle Stick
	0x001058C4, //:Raw Dripping Candle Stick
	0x00105928, //:Blessed Dripping Candle Stick
	0x0010598C, //:Hollow Dripping Candle Stick
	0x00107AC0, //:Tailbone Short Sword
	0x00107B24, //:Heavy Tailbone Short Sword
	0x00107B88, //:Sharp Tailbone Short Sword
	0x00107BEC, //:Refined Tailbone Short Sword
	0x00107C50, //:Simple Tailbone Short Sword
	0x00107CB4, //:Crystal Tailbone Short Sword
	0x00107D18, //:Fire Tailbone Short Sword
	0x00107D7C, //:Chaos Tailbone Short Sword
	0x00107DE0, //:Lightning Tailbone Short Sword
	0x00107E44, //:Deep Tailbone Short Sword
	0x00107EA8, //:Dark Tailbone Short Sword
	0x00107F0C, //:Poison Tailbone Short Sword
	0x00107F70, //:Blood Tailbone Short Sword
	0x00107FD4, //:Raw Tailbone Short Sword
	0x00108038, //:Blessed Tailbone Short Sword
	0x0010809C, //:Hollow Tailbone Short Sword
	0x0010A1D0, //:Corvian Greatknife
	0x0010A234, //:Heavy Corvian Greatknife
	0x0010A298, //:Sharp Corvian Greatknife
	0x0010A2FC, //:Refined Corvian Greatknife
	0x0010A360, //:Simple Corvian Greatknife
	0x0010A3C4, //:Crystal Corvian Greatknife
	0x0010A428, //:Fire Corvian Greatknife
	0x0010A48C, //:Chaos Corvian Greatknife
	0x0010A4F0, //:Lightning Corvian Greatknife
	0x0010A554, //:Deep Corvian Greatknife
	0x0010A5B8, //:Dark Corvian Greatknife
	0x0010A61C, //:Poison Corvian Greatknife
	0x0010A680, //:Blood Corvian Greatknife
	0x0010A6E4, //:Raw Corvian Greatknife
	0x0010A748, //:Blessed Corvian Greatknife
	0x0010A7AC, //:Hollow Corvian Greatknife
	0x00111700, //:Handmaid's Dagger
	0x00116520, //:Aquamarine Dagger
	0x00118C30, //:Murky Hand Scythe
	0x001E8480, //:Shortsword
	0x001E84E4, //:Heavy Shortsword
	0x001E8548, //:Sharp Shortsword
	0x001E85AC, //:Refined Shortsword
	0x001E8610, //:Simple Shortsword
	0x001E8674, //:Crystal Shortsword
	0x001E86D8, //:Fire Shortsword
	0x001E873C, //:Chaos Shortsword
	0x001E87A0, //:Lightning Shortsword
	0x001E8804, //:Deep Shortsword
	0x001E8868, //:Dark Shortsword
	0x001E88CC, //:Poison Shortsword
	0x001E8930, //:Blood Shortsword
	0x001E8994, //:Raw Shortsword
	0x001E89F8, //:Blessed Shortsword
	0x001E8A5C, //:Hollow Shortsword
	0x001EAB90, //:Long Sword
	0x001EABF4, //:Heavy Longsword
	0x001EAC58, //:Sharp Longsword
	0x001EACBC, //:Refined Longsword
	0x001EAD20, //:Simple Longsword
	0x001EAD84, //:Crystal Longsword
	0x001EADE8, //:Fire Longsword
	0x001EAE4C, //:Chaos Longsword
	0x001EAEB0, //:Lightning Longsword
	0x001EAF14, //:Deep Longsword
	0x001EAF78, //:Dark Longsword
	0x001EAFDC, //:Poison Longsword
	0x001EB040, //:Blood Longsword
	0x001EB0A4, //:Raw Longsword
	0x001EB108, //:Blessed Longsword
	0x001EB16C, //:Hollow Longsword
	0x001ED2A0, //:Broadsword
	0x001ED304, //:Heavy Broadsword
	0x001ED368, //:Sharp Broadsword
	0x001ED3CC, //:Refined Broadsword
	0x001ED430, //:Simple Broadsword
	0x001ED494, //:Crystal Broadsword
	0x001ED4F8, //:Fire Broadsword
	0x001ED55C, //:Chaos Broadsword
	0x001ED5C0, //:Lightning Broadsword
	0x001ED624, //:Deep Broadsword
	0x001ED688, //:Dark Broadsword
	0x001ED6EC, //:Poison Broadsword
	0x001ED750, //:Blood Broadsword
	0x001ED7B4, //:Raw Broadsword
	0x001ED818, //:Blessed Broadsword
	0x001ED87C, //:Hollow Broadsword
	0x001EF9B0, //:Broken Straight Sword
	0x001EFA14, //:Broken Heavy Straight Sword
	0x001EFA78, //:Broken Sharp Straight Sword
	0x001EFADC, //:Broken Refined Straight Sword
	0x001EFB40, //:Broken Simple Straight Sword
	0x001EFBA4, //:Broken Crystal Straight Sword
	0x001EFC08, //:Broken Fire Straight Sword
	0x001EFC6C, //:Broken Chaos Straight Sword
	0x001EFCD0, //:Broken Lightning Straight Sword
	0x001EFD34, //:Broken Deep Straight Sword
	0x001EFD98, //:Broken Dark Straight Sword
	0x001EFDFC, //:Broken Poison Straight Sword
	0x001EFE60, //:Broken Blood Straight Sword
	0x001EFEC4, //:Broken Raw Straight Sword
	0x001EFF28, //:Broken Blessed Straight Sword
	0x001EFF8C, //:Broken Hollow Straight Sword
	0x001F6EE0, //:Lothric Knight Sword
	0x001F6F44, //:Heavy Lothric Sword
	0x001F6FA8, //:Sharp Lothric Sword
	0x001F700C, //:Refined Lothric Sword
	0x001F7070, //:Simple Lothric Sword
	0x001F70D4, //:Crystal Lothric Sword
	0x001F7138, //:Fire Lothric Sword
	0x001F719C, //:Chaos Lothric Sword
	0x001F7200, //:Lightning Lothric Sword
	0x001F7264, //:Deep Lothric Sword
	0x001F72C8, //:Dark Lothric Sword
	0x001F732C, //:Poison Lothric Sword
	0x001F7390, //:Blood Lothric Sword
	0x001F73F4, //:Raw Lothric Sword
	0x001F7458, //:Blessed Lothric Sword
	0x001F74BC, //:Hollow Lothric Sword
	0x00203230, //:Sunlight Straight Sword
	0x00203294, //:Heavy Sunlight Straight Sword
	0x002032F8, //:Sharp Sunlight Straight Sword
	0x0020335C, //:Refined Sunlight Straight Sword
	0x002033C0, //:Simpleton Sunlight Straight Sword
	0x00203424, //:Crystal Sunlight Straight Sword
	0x00203488, //:Fire Sunlight Straight Sword
	0x002034EC, //:Chaos Sunlight Straight Sword
	0x00203550, //:Lightning Sunlight Straight Sword
	0x002035B4, //:Deep Sunlight Straight Sword
	0x00203618, //:Dark Sunlight Straight Sword
	0x0020367C, //:Poison Sunlight Straight Sword
	0x002036E0, //:Blood Sunlight Straight Sword
	0x00203744, //:Raw Sunlight Straight Sword
	0x002037A8, //:Blessed Sunlight Straight Sword
	0x0020380C, //:Hollow Sunlight Straight Sword
	0x00205940, //:Rotten Ghru Curved Sword
	0x002059A4, //:Heavy Rotten Ghru Sword
	0x00205A08, //:Sharp Rotten Ghru Sword
	0x00205A6C, //:Refined Rotten Ghru Sword
	0x00205AD0, //:Simple Rotten Ghru Sword
	0x00205B34, //:Crystal Rotten Ghru Sword
	0x00205B98, //:Fire Rotten Ghru Sword
	0x00205BFC, //:Chaos Rotten Ghru Sword
	0x00205C60, //:Lightning Rotten Ghru Sword
	0x00205CC4, //:Deep Rotten Ghru Sword
	0x00205D28, //:Dark Rotten Ghru Sword
	0x00205D8C, //:Poison Rotten Ghru Sword
	0x00205DF0, //:Blood Rotten Ghru Sword
	0x00205E54, //:Raw Rotten Ghru Sword
	0x00205EB8, //:Blessed Rotten Ghru Sword
	0x00205F1C, //:Hollow Rotten Ghru Sword
	0x0020A760, //:Irithyll Straight Sword
	0x0020F580, //:Cleric's Candlestick
	0x002143A0, //:Morion Blade
	0x002191C0, //:Astora Straight Sword
	0x00219224, //:Heavy Astora Sword
	0x00219288, //:Sharp Astora Sword
	0x002192EC, //:Refined Astora Sword
	0x00219350, //:Simple Astora Sword
	0x002193B4, //:Crystal Astora Sword
	0x00219418, //:Fire Astora Sword
	0x0021947C, //:Chaos Astora Sword
	0x002194E0, //:Lightning Astora Sword
	0x00219544, //:Deep Astora Sword
	0x002195A8, //:Dark Astora Sword
	0x0021960C, //:Poison Astora Sword
	0x00219670, //:Blood Astora Sword
	0x002196D4, //:Raw Astora Sword
	0x00219738, //:Blessed Astora Sword
	0x0021979C, //:Hollow Astora Sword
	0x0021B8D0, //:Barbed Straight Sword
	0x0021B934, //:Heavy Barbed Sword
	0x0021B998, //:Sharp Barbed Sword
	0x0021B9FC, //:Refined Barbed Sword
	0x0021BA60, //:Simple Barbed Sword
	0x0021BAC4, //:Crystal Barbed Sword
	0x0021BB28, //:Fire Barbed Sword
	0x0021BB8C, //:Chaos Barbed Sword
	0x0021BBF0, //:Lightning Barbed Sword
	0x0021BC54, //:Deep Barbed Sword
	0x0021BCB8, //:Dark Barbed Sword
	0x0021BD1C, //:Poison Barbed Sword
	0x0021BD80, //:Blood Barbed Sword
	0x0021BDE4, //:Raw Barbed Sword
	0x0021BE48, //:Blessed Barbed Sword
	0x0021BEAC, //:Hollow Barbed Sword
	0x0021DFE0, //:Executioner's Greatsword
	0x0021E044, //:Heavy Executioner's Straight Sword
	0x0021E0A8, //:Sharp Executioner's Straight Sword
	0x0021E10C, //:Refined Executioner's Straight Sword
	0x0021E170, //:Simpleton Executioner's Straight Sword
	0x0021E1D4, //:Crystal Executioner's Straight Sword
	0x0021E238, //:Fire Executioner's Straight Sword
	0x0021E29C, //:Chaos Executioner's Straight Sword
	0x0021E300, //:Lightning Executioner's Straight Sword
	0x0021E364, //:Deep Executioner's Straight Sword
	0x0021E3C8, //:Dark Executioner's Straight Sword
	0x0021E42C, //:Poison Executioner's Straight Sword
	0x0021E490, //:Blood Executioner's Straight Sword
	0x0021E4F4, //:Raw Executioner's Straight Sword
	0x0021E558, //:Blessed Executioner's Straight Sword
	0x0021E5BC, //:Hollow Executioner's Straight Sword
	0x002206F0, //:Anri's Straight Sword
	0x00222E00, //:Onyx Blade
	0x00225510, //:Ringed Knight Straight Sword
	0x00227C20, //:Gael Greatsword
	0x002DC6C0, //:Estoc
	0x002DC724, //:Heavy Estoc
	0x002DC788, //:Sharp Estoc
	0x002DC7EC, //:Refined Estoc
	0x002DC850, //:Simple Estoc
	0x002DC8B4, //:Crystal Estoc
	0x002DC918, //:Fire Estoc
	0x002DC97C, //:Chaos Estoc
	0x002DC9E0, //:Lightning Estoc
	0x002DCA44, //:Deep Estoc
	0x002DCAA8, //:Dark Estoc
	0x002DCB0C, //:Poison Estoc
	0x002DCB70, //:Blood Estoc
	0x002DCBD4, //:Raw Estoc
	0x002DCC38, //:Blessed Estoc
	0x002DCC9C, //:Hollow Estoc
	0x002DEDD0, //:Mail Breaker
	0x002DEE34, //:Heavy Mail Breaker
	0x002DEE98, //:Sharp Mail Breaker
	0x002DEEFC, //:Refined Mail Breaker
	0x002DEF60, //:Simple Mail Breaker
	0x002DEFC4, //:Crystal Mail Breaker
	0x002DF028, //:Fire Mail Breaker
	0x002DF08C, //:Chaos Mail Breaker
	0x002DF0F0, //:Lightning Mail Breaker
	0x002DF154, //:Deep Mail Breaker
	0x002DF1B8, //:Dark Mail Breaker
	0x002DF21C, //:Poison Mail Breaker
	0x002DF280, //:Blood Mail Breaker
	0x002DF2E4, //:Raw Mail Breaker
	0x002DF348, //:Blessed Mail Breaker
	0x002DF3AC, //:Hollow Mail Breaker
	0x002E14E0, //:Rapier
	0x002E1544, //:Heavy Rapier
	0x002E15A8, //:Sharp Rapier
	0x002E160C, //:Refined Rapier
	0x002E1670, //:Simple Rapier
	0x002E16D4, //:Crystal Rapier
	0x002E1738, //:Fire Rapier
	0x002E179C, //:Chaos Rapier
	0x002E1800, //:Lightning Rapier
	0x002E1864, //:Deep Rapier
	0x002E18C8, //:Dark Rapier
	0x002E192C, //:Poison Rapier
	0x002E1990, //:Blood Rapier
	0x002E19F4, //:Raw Rapier
	0x002E1A58, //:Blessed Rapier
	0x002E1ABC, //:Hollow Rapier
	0x002E3BF0, //:Ricard's Rapier
	0x002E3C54, //:Ricard's Heavy Rapier
	0x002E3CB8, //:Ricard's Sharp Rapier
	0x002E3D1C, //:Ricard's Refined Rapier
	0x002E3D80, //:Ricard's Simple Rapier
	0x002E3DE4, //:Ricard's Crystal Rapier
	0x002E3E48, //:Ricard's Fire Rapier
	0x002E3EAC, //:Ricard's Chaos Rapier
	0x002E3F10, //:Ricard's Lightning Rapier
	0x002E3F74, //:Ricard's Deep Rapier
	0x002E3FD8, //:Ricard's Dark Rapier
	0x002E403C, //:Ricard's Poison Rapier
	0x002E40A0, //:Ricard's Blood Rapier
	0x002E4104, //:Ricard's Raw Rapier
	0x002E4168, //:Ricard's Blessed Rapier
	0x002E41CC, //:Ricard's Hollow Rapier
	0x002E6300, //:Crystal Sage's Rapier
	0x002E6364, //:Heavy Crystal Rapier
	0x002E63C8, //:Sharp Crystal Rapier
	0x002E642C, //:Refined Crystal Rapier
	0x002E6490, //:Simple Crystal Rapier
	0x002E64F4, //:Reinforced Crystal Rapier
	0x002E6558, //:Fire Crystal Rapier
	0x002E65BC, //:Chaos Crystal Rapier
	0x002E6620, //:Lightning Crystal Rapier
	0x002E6684, //:Deep Crystal Rapier
	0x002E66E8, //:Dark Crystal Rapier
	0x002E674C, //:Poison Crystal Rapier
	0x002E67B0, //:Blood Crystal Rapier
	0x002E6814, //:Raw Crystal Rapier
	0x002E6878, //:Blessed Crystal Rapier
	0x002E68DC, //:Hollow Crystal Rapier
	0x002E8A10, //:Irithyll Rapier
	0x003D3010, //:Shotel
	0x003D3074, //:Heavy Shotel
	0x003D30D8, //:Sharp Shotel
	0x003D313C, //:Refined Shotel
	0x003D31A0, //:Simple Shotel
	0x003D3204, //:Crystal Shotel
	0x003D3268, //:Fire Shotel
	0x003D32CC, //:Chaos Shotel
	0x003D3330, //:Lightning Shotel
	0x003D3394, //:Deep Shotel
	0x003D33F8, //:Dark Shotel
	0x003D345C, //:Poison Shotel
	0x003D34C0, //:Blood Shotel
	0x003D3524, //:Raw Shotel
	0x003D3588, //:Blessed Shotel
	0x003D35EC, //:Hollow Shotel
	0x003D7E30, //:Scimitar
	0x003D7E94, //:Heavy Scimitar
	0x003D7EF8, //:Sharp Scimitar
	0x003D7F5C, //:Refined Scimitar
	0x003D7FC0, //:Simple Scimitar
	0x003D8024, //:Crystal Scimitar
	0x003D8088, //:Fire Scimitar
	0x003D80EC, //:Chaos Scimitar
	0x003D8150, //:Lightning Scimitar
	0x003D81B4, //:Deep Scimitar
	0x003D8218, //:Dark Scimitar
	0x003D827C, //:Poison Scimitar
	0x003D82E0, //:Blood Scimitar
	0x003D8344, //:Raw Scimitar
	0x003D83A8, //:Blessed Scimitar
	0x003D840C, //:Hollow Scimitar
	0x003DA540, //:Falchion
	0x003DA5A4, //:Heavy Falchion
	0x003DA608, //:Sharp Falchion
	0x003DA66C, //:Refined Falchion
	0x003DA6D0, //:Simple Falchion
	0x003DA734, //:Crystal Falchion
	0x003DA798, //:Fire Falchion
	0x003DA7FC, //:Chaos Falchion
	0x003DA860, //:Lightning Falchion
	0x003DA8C4, //:Deep Falchion
	0x003DA928, //:Dark Falchion
	0x003DA98C, //:Poison Falchion
	0x003DA9F0, //:Blood Falchion
	0x003DAA54, //:Raw Falchion
	0x003DAAB8, //:Blessed Falchion
	0x003DAB1C, //:Hollow Falchion
	0x003DCC50, //:Carthus Curved Sword
	0x003DCCB4, //:Heavy Carthus Sword
	0x003DCD18, //:Sharp Carthus Sword
	0x003DCD7C, //:Refined Carthus Sword
	0x003DCDE0, //:Simple Carthus Sword
	0x003DCE44, //:Crystal Carthus Sword
	0x003DCEA8, //:Fire Carthus Sword
	0x003DCF0C, //:Chaos Carthus Sword
	0x003DCF70, //:Lightning Carthus Sword
	0x003DCFD4, //:Deep Carthus Sword
	0x003DD038, //:Dark Carthus Sword
	0x003DD09C, //:Poison Carthus Sword
	0x003DD100, //:Blood Carthus Sword
	0x003DD164, //:Raw Carthus Sword
	0x003DD1C8, //:Blessed Carthus Sword
	0x003DD22C, //:Hollow Carthus Sword
	0x003DF360, //:Carthus Curved Greatsword
	0x003DF3C4, //:Heavy Carthus Greatsword
	0x003DF428, //:Sharp Carthus Greatsword
	0x003DF48C, //:Refined Carthus Greatsword
	0x003DF4F0, //:Simple Carthus Greatsword
	0x003DF554, //:Crystal Carthus Greatsword
	0x003DF5B8, //:Fire Carthus Greatsword
	0x003DF61C, //:Chaos Carthus Greatsword
	0x003DF680, //:Lightning Carthus Greatsword
	0x003DF6E4, //:Deep Carthus Greatsword
	0x003DF748, //:Dark Carthus Greatsword
	0x003DF7AC, //:Poison Carthus Greatsword
	0x003DF810, //:Blood Carthus Greatsword
	0x003DF874, //:Raw Carthus Greatsword
	0x003DF8D8, //:Blessed Carthus Greatsword
	0x003DF93C, //:Hollow Carthus Greatsword
	0x003E1A70, //:Pontiff Knight Curved Sword
	0x003E4180, //:Storm Curved Sword
	0x003E6890, //:Painting Guardian's Curved Sword
	0x003E68F4, //:Painting Guardian's Heavy Sword
	0x003E6958, //:Painting Guardian's Sharp Sword
	0x003E69BC, //:Painting Guardian's Refined Sword
	0x003E6A20, //:Painting Guardian's Simple Sword
	0x003E6A84, //:Painting Guardian's Crystal Sword
	0x003E6AE8, //:Painting Guardian's Fire Sword
	0x003E6B4C, //:Painting Guardian's Chaos Sword
	0x003E6BB0, //:Painting Guardian's Lightning Sword
	0x003E6C14, //:Painting Guardian's Deep Sword
	0x003E6C78, //:Painting Guardian's Dark Sword
	0x003E6CDC, //:Painting Guardian's Poison Sword
	0x003E6D40, //:Painting Guardian's Blood Sword
	0x003E6DA4, //:Painting Guardian's Raw Sword
	0x003E6E08, //:Painting Guardian's Blessed Sword
	0x003E6E6C, //:Painting Guardian's Hollow Sword
	0x003E8FA0, //:Crescent Moon Sword
	0x003EB6B0, //:Carthus Shotel
	0x003EB714, //:Heavy Carthus Shotel
	0x003EB778, //:Sharp Carthus Shotel
	0x003EB7DC, //:Refined Carthus Shotel
	0x003EB840, //:Simple Carthus Shotel
	0x003EB8A4, //:Crystal Carthus Shotel
	0x003EB908, //:Fire Carthus Shotel
	0x003EB96C, //:Chaos Carthus Shotel
	0x003EB9D0, //:Lightning Carthus Shotel
	0x003EBA34, //:Deep Carthus Shotel
	0x003EBA98, //:Dark Carthus Shotel
	0x003EBAFC, //:Poison Carthus Shotel
	0x003EBB60, //:Blood Carthus Shotel
	0x003EBBC4, //:Raw Carthus Shotel
	0x003EBC28, //:Blessed Carthus Shotel
	0x003EBC8C, //:Hollow Carthus Shotel
	0x003EDDC0, //:Follower Sabre
	0x003F04D0, //:Demon Scar
	0x004C4B40, //:Uchigatana
	0x004C4BA4, //:Heavy Uchigatana
	0x004C4C08, //:Sharp Uchigatana
	0x004C4C6C, //:Refined Uchigatana
	0x004C4CD0, //:Simple Uchigatana
	0x004C4D34, //:Crystal Uchigatana
	0x004C4D98, //:Fire Uchigatana
	0x004C4DFC, //:Chaos Uchigatana
	0x004C4E60, //:Lightning Uchigatana
	0x004C4EC4, //:Deep Uchigatana
	0x004C4F28, //:Dark Uchigatana
	0x004C4F8C, //:Poison Uchigatana
	0x004C4FF0, //:Blood Uchigatana
	0x004C5054, //:Raw Uchigatana
	0x004C50B8, //:Blessed Uchigatana
	0x004C511C, //:Hollow Uchigatana
	0x004C7250, //:Washing Pole
	0x004C72B4, //:Heavy Washing Pole
	0x004C7318, //:Sharp Washing Pole
	0x004C737C, //:Refined Washing Pole
	0x004C73E0, //:Simple Washing Pole
	0x004C7444, //:Crystal Washing Pole
	0x004C74A8, //:Fire Washing Pole
	0x004C750C, //:Chaos Washing Pole
	0x004C7570, //:Lightning Washing Pole
	0x004C75D4, //:Deep Washing Pole
	0x004C7638, //:Dark Washing Pole
	0x004C769C, //:Poison Washing Pole
	0x004C7700, //:Blood Washing Pole
	0x004C7764, //:Raw Washing Pole
	0x004C77C8, //:Blessed Washing Pole
	0x004C782C, //:Hollow Washing Pole
	0x004C9960, //:Chaos Blade
	0x004CC070, //:Black Blade
	0x004CC0D4, //:Heavy Black Blade
	0x004CC138, //:Sharp Black Blade
	0x004CC19C, //:Refined Black Blade
	0x004CC200, //:Simple Black Blade
	0x004CC264, //:Crystal Black Blade
	0x004CC2C8, //:Fire Black Blade
	0x004CC32C, //:Chaos Black Blade
	0x004CC390, //:Lightning Black Blade
	0x004CC3F4, //:Deep Black Blade
	0x004CC458, //:Dark Black Blade
	0x004CC4BC, //:Poison Black Blade
	0x004CC520, //:Blood Black Blade
	0x004CC584, //:Raw Black Blade
	0x004CC5E8, //:Blessed Black Blade
	0x004CC64C, //:Hollow Black Blade
	0x004CE780, //:Bloodlust
	0x004D0E90, //:Darkdrift
	0x004D35A0, //:Frayed Blade
	0x005B8D80, //:Bastard Sword
	0x005B8DE4, //:Heavy Bastard Sword
	0x005B8E48, //:Sharp Bastard Sword
	0x005B8EAC, //:Refined Bastard Sword
	0x005B8F10, //:Simple Bastard Sword
	0x005B8F74, //:Crystal Bastard Sword
	0x005B8FD8, //:Fire Bastard Sword
	0x005B903C, //:Chaos Bastard Sword
	0x005B90A0, //:Lightning Bastard Sword
	0x005B9104, //:Deep Bastard Sword
	0x005B9168, //:Dark Bastard Sword
	0x005B91CC, //:Poison Bastard Sword
	0x005B9230, //:Blood Bastard Sword
	0x005B9294, //:Raw Bastard Sword
	0x005B92F8, //:Blessed Bastard Sword
	0x005B935C, //:Hollow Bastard Sword
	0x005BDBA0, //:Claymore
	0x005BDC04, //:Heavy Claymore
	0x005BDC68, //:Sharp Claymore
	0x005BDCCC, //:Refined Claymore
	0x005BDD30, //:Simple Claymore
	0x005BDD94, //:Crystal Claymore
	0x005BDDF8, //:Fire Claymore
	0x005BDE5C, //:Chaos Claymore
	0x005BDEC0, //:Lightning Claymore
	0x005BDF24, //:Deep Claymore
	0x005BDF88, //:Dark Claymore
	0x005BDFEC, //:Poison Claymore
	0x005BE050, //:Blood Claymore
	0x005BE0B4, //:Raw Claymore
	0x005BE118, //:Blessed Claymore
	0x005BE17C, //:Hollow Claymore
	0x005C29C0, //:Zweihander
	0x005C2A24, //:Heavy Zweihander
	0x005C2A88, //:Sharp Zweihander
	0x005C2AEC, //:Refined Zweihander
	0x005C2B50, //:Simple Zweihander
	0x005C2BB4, //:Crystal Zweihander
	0x005C2C18, //:Fire Zweihander
	0x005C2C7C, //:Chaos Zweihander
	0x005C2CE0, //:Lightning Zweihander
	0x005C2D44, //:Deep Zweihander
	0x005C2DA8, //:Dark Zweihander
	0x005C2E0C, //:Poison Zweihander
	0x005C2E70, //:Blood Zweihander
	0x005C2ED4, //:Raw Zweihander
	0x005C2F38, //:Blessed Zweihander
	0x005C2F9C, //:Hollow Zweihander
	0x005C50D0, //:Greatsword
	0x005C5134, //:Heavy Greatsword
	0x005C5198, //:Sharp Greatsword
	0x005C51FC, //:Refined Greatsword
	0x005C5260, //:Simple Greatsword
	0x005C52C4, //:Crystal Greatsword
	0x005C5328, //:Fire Greatsword
	0x005C538C, //:Chaos Greatsword
	0x005C53F0, //:Lightning Greatsword
	0x005C5454, //:Deep Greatsword
	0x005C54B8, //:Dark Greatsword
	0x005C551C, //:Poison Greatsword
	0x005C5580, //:Blood Greatsword
	0x005C55E4, //:Raw Greatsword
	0x005C5648, //:Blessed Greatsword
	0x005C56AC, //:Hollow Greatsword
	0x005C9EF0, //:Astora Greatsword
	0x005C9F54, //:Heavy Astora Greatsword
	0x005C9FB8, //:Sharp Astora Greatsword
	0x005CA01C, //:Refined Astora Greatsword
	0x005CA080, //:Simple Astora Greatsword
	0x005CA0E4, //:Crystal Astora Greatsword
	0x005CA148, //:Fire Astora Greatsword
	0x005CA1AC, //:Chaos Astora Greatsword
	0x005CA210, //:Lightning Astora Greatsword
	0x005CA274, //:Deep Astora Greatsword
	0x005CA2D8, //:Dark Astora Greatsword
	0x005CA33C, //:Poison Astora Greatsword
	0x005CA3A0, //:Blood Astora Greatsword
	0x005CA404, //:Raw Astora Greatsword
	0x005CA468, //:Blessed Astora Greatsword
	0x005CA4CC, //:Hollow Astora Greatsword
	0x005CC600, //:Murakumo
	0x005CC664, //:Heavy Murakumo
	0x005CC6C8, //:Sharp Murakumo
	0x005CC72C, //:Refined Murakumo
	0x005CC790, //:Simple Murakumo
	0x005CC7F4, //:Crystal Murakumo
	0x005CC858, //:Fire Murakumo
	0x005CC8BC, //:Chaos Murakumo
	0x005CC920, //:Lightning Murakumo
	0x005CC984, //:Deep Murakumo
	0x005CC9E8, //:Dark Murakumo
	0x005CCA4C, //:Poison Murakumo
	0x005CCAB0, //:Blood Murakumo
	0x005CCB14, //:Raw Murakumo
	0x005CCB78, //:Blessed Murakumo
	0x005CCBDC, //:Hollow Murakumo
	0x005D1420, //:Lothric Knight Greatsword
	0x005D1484, //:Heavy Lothric Greatsword
	0x005D14E8, //:Sharp Lothric Greatsword
	0x005D154C, //:Refined Lothric Greatsword
	0x005D15B0, //:Simple Lothric Greatsword
	0x005D1614, //:Crystal Lothric Greatsword
	0x005D1678, //:Fire Lothric Greatsword
	0x005D16DC, //:Chaos Lothric Greatsword
	0x005D1740, //:Lightning Lothric Greatsword
	0x005D17A4, //:Deep Lothric Greatsword
	0x005D1808, //:Dark Lothric Greatsword
	0x005D186C, //:Poison Lothric Greatsword
	0x005D18D0, //:Blood Lothric Greatsword
	0x005D1934, //:Raw Lothric Greatsword
	0x005D1998, //:Blessed Lothric Greatsword
	0x005D19FC, //:Hollow Lothric Greatsword
	0x005D8950, //:Black Knight Greatsword
	0x005D89B4, //:Heavy Black Knight Greatsword
	0x005D8A18, //:Sharp Black Knight Greatsword
	0x005D8A7C, //:Refined Black Knight Greatsword
	0x005D8AE0, //:Simple Black Knight Greatsword
	0x005D8B44, //:Crystal Black Knight Greatsword
	0x005D8BA8, //:Fire Black Knight Greatsword
	0x005D8C0C, //:Chaos Black Knight Greatsword
	0x005D8C70, //:Lightning Black Knight Greatsword
	0x005D8CD4, //:Deep Black Knight Greatsword
	0x005D8D38, //:Dark Black Knight Greatsword
	0x005D8D9C, //:Poison Black Knight Greatsword
	0x005D8E00, //:Blood Black Knight Greatsword
	0x005D8E64, //:Raw Black Knight Greatsword
	0x005D8EC8, //:Blessed Black Knight Greatsword
	0x005D8F2C, //:Hollow Black Knight Greatsword
	0x005DB060, //:Flamberge
	0x005DB0C4, //:Heavy Flamberge
	0x005DB128, //:Sharp Flamberge
	0x005DB18C, //:Refined Flamberge
	0x005DB1F0, //:Simple Flamberge
	0x005DB254, //:Crystal Flamberge
	0x005DB2B8, //:Fire Flamberge
	0x005DB31C, //:Chaos Flamberge
	0x005DB380, //:Lightning Flamberge
	0x005DB3E4, //:Deep Flamberge
	0x005DB448, //:Dark Flamberge
	0x005DB4AC, //:Poison Flamberge
	0x005DB510, //:Blood Flamberge
	0x005DB574, //:Raw Flamberge
	0x005DB5D8, //:Blessed Flamberge
	0x005DB63C, //:Hollow Flamberge
	0x005DD770, //:Exile Greatsword
	0x005DD7D4, //:Heavy Exile Greatsword
	0x005DD838, //:Sharp Exile Greatsword
	0x005DD89C, //:Refined Exile Greatsword
	0x005DD900, //:Simple Exile Greatsword
	0x005DD964, //:Crystal Exile Greatsword
	0x005DD9C8, //:Fire Exile Greatsword
	0x005DDA2C, //:Chaos Exile Greatsword
	0x005DDA90, //:Lightning Exile Greatsword
	0x005DDAF4, //:Deep Exile Greatsword
	0x005DDB58, //:Dark Exile Greatsword
	0x005DDBBC, //:Poison Exile Greatsword
	0x005DDC20, //:Blood Exile Greatsword
	0x005DDC84, //:Raw Exile Greatsword
	0x005DDCE8, //:Blessed Exile Greatsword
	0x005DDD4C, //:Hollow Exile Greatsword
	0x005E2590, //:Greatsword of Judgment
	0x005E4CA0, //:Profaned Greatsword
	0x005E73B0, //:Cathedral Knight Greatsword
	0x005E7414, //:Heavy Cathedral Greatsword
	0x005E7478, //:Sharp Cathedral Greatsword
	0x005E74DC, //:Refined Cathedral Greatsword
	0x005E7540, //:Simple Cathedral Greatsword
	0x005E75A4, //:Crystal Cathedral Greatsword
	0x005E7608, //:Fire Cathedral Greatsword
	0x005E766C, //:Chaos Cathedral Greatsword
	0x005E76D0, //:Lightning Cathedral Greatsword
	0x005E7734, //:Deep Cathedral Greatsword
	0x005E7798, //:Dark Cathedral Greatsword
	0x005E77FC, //:Poison Cathedral Greatsword
	0x005E7860, //:Blood Cathedral Greatsword
	0x005E78C4, //:Raw Cathedral Greatsword
	0x005E7928, //:Blessed Cathedral Greatsword
	0x005E798C, //:Hollow Cathedral Greatsword
	0x005E9AC0, //:Farron Greatsword
	0x005F0FF0, //:Yhorm's Great Machete
	0x005F3700, //:Dark Sword
	0x005F3764, //:Heavy Dark Sword
	0x005F37C8, //:Sharp Dark Sword
	0x005F382C, //:Refined Dark Sword
	0x005F3890, //:Simple Dark Sword
	0x005F38F4, //:Crystal Dark Sword
	0x005F3958, //:Fire Dark Sword
	0x005F39BC, //:Chaos Dark Sword
	0x005F3A20, //:Lightning Dark Sword
	0x005F3A84, //:Deep Dark Sword
	0x005F3AE8, //:Reinforced Dark Sword
	0x005F3B4C, //:Poison Dark Sword
	0x005F3BB0, //:Blood Dark Sword
	0x005F3C14, //:Raw Dark Sword
	0x005F3C78, //:Blessed Dark Sword
	0x005F3CDC, //:Hollow Dark Sword
	0x005F5E10, //:Black Knight Sword
	0x005F5E74, //:Heavy Black Knight Sword
	0x005F5ED8, //:Sharp Black Knight Sword
	0x005F5F3C, //:Refined Black Knight Sword
	0x005F5FA0, //:Simple Black Knight Sword
	0x005F6004, //:Crystal Black Knight Sword
	0x005F6068, //:Fire Black Knight Sword
	0x005F60CC, //:Chaos Black Knight Sword
	0x005F6130, //:Lightning Black Knight Sword
	0x005F6194, //:Deep Black Knight Sword
	0x005F61F8, //:Dark Black Knight Sword
	0x005F625C, //:Poison Black Knight Sword
	0x005F62C0, //:Blood Black Knight Sword
	0x005F6324, //:Raw Black Knight Sword
	0x005F6388, //:Blessed Black Knight Sword
	0x005F63EC, //:Hollow Black Knight Sword
	0x005F8520, //:Lorian's Greatsword
	0x005FAC30, //:Twin Princes' Greatsword
	0x005FD340, //:Lothric's Holy Sword
	0x005FFA50, //:Wolnir's Holy Sword
	0x00602160, //:Wolf Knight's Greatsword
	0x0060216A, //:Greatsword of Artorias
	0x0060216B, //:Greatsword of Artorias+1
	0x0060216C, //:Greatsword of Artorias+2
	0x0060216D, //:Greatsword of Artorias+3
	0x0060216E, //:Greatsword of Artorias+4
	0x0060216F, //:Greatsword of Artorias+5
	0x00604870, //:Hollowslayer Greatsword
	0x006048D4, //:Heavy Hollowslayer Greatsword
	0x00604938, //:Sharp Hollowslayer Greatsword
	0x0060499C, //:Refined Hollowslayer Greatsword
	0x00604A00, //:Simple Hollowslayer Greatsword
	0x00604A64, //:Crystal Hollowslayer Greatsword
	0x00604AC8, //:Fire Hollowslayer Greatsword
	0x00604B2C, //:Chaos Hollowslayer Greatsword
	0x00604B90, //:Lightning Hollowslayer Greatsword
	0x00604BF4, //:Deep Hollowslayer Greatsword
	0x00604C58, //:Dark Hollowslayer Greatsword
	0x00604CBC, //:Poison Hollowslayer Greatsword
	0x00604D20, //:Blood Hollowslayer Greatsword
	0x00604D84, //:Raw Hollowslayer Greatsword
	0x00604DE8, //:Blessed Hollowslayer Greatsword
	0x00604E4C, //:Hollow Hollowslayer Greatsword
	0x00606F80, //:Moonlight Greatsword
	0x00609690, //:Drakeblood Greatsword
	0x006096F4, //:Heavy Drakeblood Greatsword
	0x00609758, //:Sharp Drakeblood Greatsword
	0x006097BC, //:Refined Drakeblood Greatsword
	0x00609820, //:Simple Drakeblood Greatsword
	0x00609884, //:Crystal Drakeblood Greatsword
	0x006098E8, //:Fire Drakeblood Greatsword
	0x0060994C, //:Chaos Drakeblood Greatsword
	0x006099B0, //:Lightning Drakeblood Greatsword
	0x00609A14, //:Deep Drakeblood Greatsword
	0x00609A78, //:Dark Drakeblood Greatsword
	0x00609ADC, //:Poison Drakeblood Greatsword
	0x00609B40, //:Blood Drakeblood Greatsword
	0x00609BA4, //:Raw Drakeblood Greatsword
	0x00609C08, //:Blessed Drakeblood Greatsword
	0x00609C6C, //:Hollow Drakeblood Greatsword
	0x0060BDA0, //:Firelink Greatsword
	0x0060E4B0, //:Fume Ultra Greatsword
	0x00610BC0, //:Old Wolf Curved Sword
	0x006132D0, //:Storm Ruler
	0x006159E0, //:Herald Curved Greatsword
	0x006ACFC0, //:Hand Axe
	0x006AD024, //:Heavy Hand Axe
	0x006AD088, //:Sharp Hand Axe
	0x006AD0EC, //:Refined Hand Axe
	0x006AD150, //:Simple Hand Axe
	0x006AD1B4, //:Crystal Hand Axe
	0x006AD218, //:Fire Hand Axe
	0x006AD27C, //:Chaos Hand Axe
	0x006AD2E0, //:Lightning Hand Axe
	0x006AD344, //:Deep Hand Axe
	0x006AD3A8, //:Dark Hand Axe
	0x006AD40C, //:Poison Hand Axe
	0x006AD470, //:Blood Hand Axe
	0x006AD4D4, //:Raw Hand Axe
	0x006AD538, //:Blessed Hand Axe
	0x006AD59C, //:Hollow Hand Axe
	0x006AF6D0, //:Battle Axe
	0x006AF734, //:Heavy Battle Axe
	0x006AF798, //:Sharp Battle Axe
	0x006AF7FC, //:Refined Battle Axe
	0x006AF860, //:Simple Battle Axe
	0x006AF8C4, //:Crystal Battle Axe
	0x006AF928, //:Fire Battle Axe
	0x006AF98C, //:Chaos Battle Axe
	0x006AF9F0, //:Lightning Battle Axe
	0x006AFA54, //:Deep Battle Axe
	0x006AFAB8, //:Dark Battle Axe
	0x006AFB1C, //:Poison Battle Axe
	0x006AFB80, //:Blood Battle Axe
	0x006AFBE4, //:Raw Battle Axe
	0x006AFC48, //:Blessed Battle Axe
	0x006AFCAC, //:Hollow Battle Axe
	0x006B1DE0, //:Brigand Axe
	0x006B1E44, //:Heavy Brigand Axe
	0x006B1EA8, //:Sharp Brigand Axe
	0x006B1F0C, //:Refined Brigand Axe
	0x006B1F70, //:Simple Brigand Axe
	0x006B1FD4, //:Crystal Brigand Axe
	0x006B2038, //:Fire Brigand Axe
	0x006B209C, //:Chaos Brigand Axe
	0x006B2100, //:Lightning Brigand Axe
	0x006B2164, //:Deep Brigand Axe
	0x006B21C8, //:Dark Brigand Axe
	0x006B222C, //:Poison Brigand Axe
	0x006B2290, //:Blood Brigand Axe
	0x006B22F4, //:Raw Brigand Axe
	0x006B2358, //:Blessed Brigand Axe
	0x006B23BC, //:Hollow Brigand Axe
	0x006B6C00, //:Crescent Axe
	0x006B6C64, //:Heavy Crescent Axe
	0x006B6CC8, //:Sharp Crescent Axe
	0x006B6D2C, //:Refined Crescent Axe
	0x006B6D90, //:Simple Crescent Axe
	0x006B6DF4, //:Crystal Crescent Axe
	0x006B6E58, //:Fire Crescent Axe
	0x006B6EBC, //:Chaos Crescent Axe
	0x006B6F20, //:Lightning Crescent Axe
	0x006B6F84, //:Deep Crescent Axe
	0x006B6FE8, //:Dark Crescent Axe
	0x006B704C, //:Poison Crescent Axe
	0x006B70B0, //:Blood Crescent Axe
	0x006B7114, //:Raw Crescent Axe
	0x006B7178, //:Blessed Crescent Axe
	0x006B71DC, //:Hollow Crescent Axe
	0x006B9310, //:Greataxe
	0x006B9374, //:Heavy Greataxe
	0x006B93D8, //:Sharp Greataxe
	0x006B943C, //:Refined Greataxe
	0x006B94A0, //:Simple Greataxe
	0x006B9504, //:Crystal Greataxe
	0x006B9568, //:Fire Greataxe
	0x006B95CC, //:Chaos Greataxe
	0x006B9630, //:Lightning Greataxe
	0x006B9694, //:Deep Greataxe
	0x006B96F8, //:Dark Greataxe
	0x006B975C, //:Poison Greataxe
	0x006B97C0, //:Blood Greataxe
	0x006B9824, //:Raw Greataxe
	0x006B9888, //:Blessed Greataxe
	0x006B98EC, //:Hollow Greataxe
	0x006BE130, //:Butcher Knife
	0x006BE194, //:Heavy Butcher Knife
	0x006BE1F8, //:Sharp Butcher Knife
	0x006BE25C, //:Refined Butcher Knife
	0x006BE2C0, //:Simple Butcher Knife
	0x006BE324, //:Crystal Butcher Knife
	0x006BE388, //:Fire Butcher Knife
	0x006BE3EC, //:Chaos Butcher Knife
	0x006BE450, //:Lightning Butcher Knife
	0x006BE4B4, //:Deep Butcher Knife
	0x006BE518, //:Dark Butcher Knife
	0x006BE57C, //:Poison Butcher Knife
	0x006BE5E0, //:Blood Butcher Knife
	0x006BE644, //:Raw Butcher Knife
	0x006BE6A8, //:Blessed Butcher Knife
	0x006BE70C, //:Hollow Butcher Knife
	0x006C0840, //:Dragonslayer's Axe
	0x006C08A4, //:Heavy Dragonslayer's Axe
	0x006C0908, //:Sharp Dragonslayer's Axe
	0x006C096C, //:Refined Dragonslayer's Axe
	0x006C09D0, //:Simple Dragonslayer's Axe
	0x006C0A34, //:Crystal Dragonslayer's Axe
	0x006C0A98, //:Fire Dragonslayer's Axe
	0x006C0AFC, //:Chaos Dragonslayer's Axe
	0x006C0B60, //:Lightning Dragonslayer's Axe
	0x006C0BC4, //:Deep Dragonslayer's Axe
	0x006C0C28, //:Dark Dragonslayer's Axe
	0x006C0C8C, //:Poison Dragonslayer's Axe
	0x006C0CF0, //:Blood Dragonslayer's Axe
	0x006C0D54, //:Raw Dragonslayer's Axe
	0x006C0DB8, //:Blessed Dragonslayer's Axe
	0x006C0E1C, //:Hollow Dragonslayer's Axe
	0x006C2F50, //:Missionary's Axe
	0x006C2FB4, //:Heavy Missionary's Axe
	0x006C3018, //:Sharp Missionary's Axe
	0x006C307C, //:Refined Missionary's Axe
	0x006C30E0, //:Simpleton Missionary's Axe
	0x006C3144, //:Crystal Missionary's Axe
	0x006C31A8, //:Fire Missionary's Axe
	0x006C320C, //:Chaos Missionary's Axe
	0x006C3270, //:Lightning Missionary's Axe
	0x006C32D4, //:Deep Missionary's Axe
	0x006C3338, //:Dark Missionary's Axe
	0x006C339C, //:Poison Missionary's Axe
	0x006C3400, //:Blood Missionary's Axe
	0x006C3464, //:Raw Missionary's Axe
	0x006C34C8, //:Blessed Missionary's Axe
	0x006C352C, //:Hollow Missionary's Axe
	0x006C5660, //:Thrall Axe
	0x006C56C4, //:Heavy Thrall Axe
	0x006C5728, //:Sharp Thrall Axe
	0x006C578C, //:Refined Thrall Axe
	0x006C57F0, //:Simple Thrall Axe
	0x006C5854, //:Crystal Thrall Axe
	0x006C58B8, //:Fire Thrall Axe
	0x006C591C, //:Chaos Thrall Axe
	0x006C5980, //:Lightning Thrall Axe
	0x006C59E4, //:Deep Thrall Axe
	0x006C5A48, //:Dark Thrall Axe
	0x006C5AAC, //:Poison Thrall Axe
	0x006C5B10, //:Blood Thrall Axe
	0x006C5B74, //:Raw Thrall Axe
	0x006C5BD8, //:Blessed Thrall Axe
	0x006C5C3C, //:Hollow Thrall Axe
	0x006C7D70, //:Dragonslayer Greataxe
	0x006CA480, //:Demon's Greataxe
	0x006CCB90, //:Eleonora
	0x006D19B0, //:Man Serpent Hatchet
	0x006D1A14, //:Heavy Serpent Hatchet
	0x006D1A78, //:Sharp Serpent Hatchet
	0x006D1ADC, //:Refined Serpent Hatchet
	0x006D1B40, //:Simple Serpent Hatchet
	0x006D1BA4, //:Crystal Serpent Hatchet
	0x006D1C08, //:Fire Serpent Hatchet
	0x006D1C6C, //:Chaos Serpent Hatchet
	0x006D1CD0, //:Lightning Serpent Hatchet
	0x006D1D34, //:Deep Serpent Hatchet
	0x006D1D98, //:Dark Serpent Hatchet
	0x006D1DFC, //:Poison Serpent Hatchet
	0x006D1E60, //:Blood Serpent Hatchet
	0x006D1EC4, //:Raw Serpent Hatchet
	0x006D1F28, //:Blessed Serpent Hatchet
	0x006D1F8C, //:Hollow Serpent Hatchet
	0x006D40C0, //:Dragon King Greataxe
	0x006D67D0, //:Millwood Battle Axe
	0x006D8EE0, //:Earth Seeker
	0x007A1200, //:Club
	0x007A1264, //:Heavy Club
	0x007A12C8, //:Sharp Club
	0x007A132C, //:Refined Club
	0x007A1390, //:Simple Club
	0x007A13F4, //:Crystal Club
	0x007A1458, //:Fire Club
	0x007A14BC, //:Chaos Club
	0x007A1520, //:Lightning Club
	0x007A1584, //:Deep Club
	0x007A15E8, //:Dark Club
	0x007A164C, //:Poison Club
	0x007A16B0, //:Blood Club
	0x007A1714, //:Raw Club
	0x007A1778, //:Blessed Club
	0x007A17DC, //:Hollow Club
	0x007A3910, //:Mace
	0x007A3974, //:Heavy Mace
	0x007A39D8, //:Sharp Mace
	0x007A3A3C, //:Refined Mace
	0x007A3AA0, //:Simple Mace
	0x007A3B04, //:Crystal Mace
	0x007A3B68, //:Fire Mace
	0x007A3BCC, //:Chaos Mace
	0x007A3C30, //:Lightning Mace
	0x007A3C94, //:Deep Mace
	0x007A3CF8, //:Dark Mace
	0x007A3D5C, //:Poison Mace
	0x007A3DC0, //:Blood Mace
	0x007A3E24, //:Raw Mace
	0x007A3E88, //:Blessed Mace
	0x007A3EEC, //:Hollow Mace
	0x007A6020, //:Morning Star
	0x007A6084, //:Heavy Morning Star
	0x007A60E8, //:Sharp Morning Star
	0x007A614C, //:Refined Morning Star
	0x007A61B0, //:Simple Morning Star
	0x007A6214, //:Crystal Morning Star
	0x007A6278, //:Fire Morning Star
	0x007A62DC, //:Chaos Morning Star
	0x007A6340, //:Lightning Morning Star
	0x007A63A4, //:Deep Morning Star
	0x007A6408, //:Dark Morning Star
	0x007A646C, //:Poison Morning Star
	0x007A64D0, //:Blood Morning Star
	0x007A6534, //:Raw Morning Star
	0x007A6598, //:Blessed Morning Star
	0x007A65FC, //:Hollow Morning Star
	0x007A8730, //:Reinforced Club
	0x007A8794, //:Heavy Reinforced Club
	0x007A87F8, //:Sharp Reinforced Club
	0x007A885C, //:Refined Reinforced Club
	0x007A88C0, //:Simple Reinforced Club
	0x007A8924, //:Crystal Reinforced Club
	0x007A8988, //:Fire Reinforced Club
	0x007A89EC, //:Chaos Reinforced Club
	0x007A8A50, //:Lightning Reinforced Club
	0x007A8AB4, //:Deep Reinforced Club
	0x007A8B18, //:Dark Reinforced Club
	0x007A8B7C, //:Poison Reinforced Club
	0x007A8BE0, //:Blood Reinforced Club
	0x007A8C44, //:Raw Reinforced Club
	0x007A8CA8, //:Blessed Reinforced Club
	0x007A8D0C, //:Hollow Reinforced Club
	0x007AFC60, //:Large Club
	0x007AFCC4, //:Heavy Large Club
	0x007AFD28, //:Sharp Large Club
	0x007AFD8C, //:Refined Large Club
	0x007AFDF0, //:Simple Large Club
	0x007AFE54, //:Crystal Large Club
	0x007AFEB8, //:Fire Large Club
	0x007AFF1C, //:Chaos Large Club
	0x007AFF80, //:Lightning Large Club
	0x007AFFE4, //:Deep Large Club
	0x007B0048, //:Dark Large Club
	0x007B00AC, //:Poison Large Club
	0x007B0110, //:Blood Large Club
	0x007B0174, //:Raw Large Club
	0x007B01D8, //:Blessed Large Club
	0x007B023C, //:Hollow Large Club
	0x007B4A80, //:Great Club
	0x007B4AE4, //:Heavy Great Club
	0x007B4B48, //:Sharp Great Club
	0x007B4BAC, //:Refined Great Club
	0x007B4C10, //:Simple Great Club
	0x007B4C74, //:Crystal Great Club
	0x007B4CD8, //:Fire Great Club
	0x007B4D3C, //:Chaos Great Club
	0x007B4DA0, //:Lightning Great Club
	0x007B4E04, //:Deep Great Club
	0x007B4E68, //:Dark Great Club
	0x007B4ECC, //:Poison Great Club
	0x007B4F30, //:Blood Great Club
	0x007B4F94, //:Raw Great Club
	0x007B4FF8, //:Blessed Great Club
	0x007B505C, //:Hollow Great Club
	0x007BBFB0, //:Great Mace
	0x007BC014, //:Heavy Great Mace
	0x007BC078, //:Sharp Great Mace
	0x007BC0DC, //:Refined Great Mace
	0x007BC140, //:Simple Great Mace
	0x007BC1A4, //:Crystal Great Mace
	0x007BC208, //:Fire Great Mace
	0x007BC26C, //:Chaos Great Mace
	0x007BC2D0, //:Lightning Great Mace
	0x007BC334, //:Deep Great Mace
	0x007BC398, //:Dark Great Mace
	0x007BC3FC, //:Poison Great Mace
	0x007BC460, //:Blood Great Mace
	0x007BC4C4, //:Raw Great Mace
	0x007BC528, //:Blessed Great Mace
	0x007BC58C, //:Hollow Great Mace
	0x007C8300, //:Great Wooden Hammer
	0x007C8364, //:Heavy Wooden Hammer
	0x007C83C8, //:Sharp Wooden Hammer
	0x007C842C, //:Refined Wooden Hammer
	0x007C8490, //:Simple Wooden Hammer
	0x007C84F4, //:Crystal Wooden Hammer
	0x007C8558, //:Fire Wooden Hammer
	0x007C85BC, //:Chaos Wooden Hammer
	0x007C8620, //:Lightning Wooden Hammer
	0x007C8684, //:Deep Wooden Hammer
	0x007C86E8, //:Dark Wooden Hammer
	0x007C874C, //:Poison Wooden Hammer
	0x007C87B0, //:Blood Wooden Hammer
	0x007C8814, //:Raw Wooden Hammer
	0x007C8878, //:Blessed Wooden Hammer
	0x007C88DC, //:Hollow Wooden Hammer
	0x007CAA10, //:Gargoyle Flame Hammer
	0x007CD120, //:Vordt's Great Hammer
	0x007CF830, //:Old King's Great Hammer
	0x007D4650, //:Four Knights Hammer
	0x007D6D60, //:Heysel Pick
	0x007D9470, //:Hammer of the Great Tree
	0x007DBB80, //:Warpick
	0x007DBBE4, //:Heavy Warpick
	0x007DBC48, //:Sharp Warpick
	0x007DBCAC, //:Refined Warpick
	0x007DBD10, //:Simple Warpick
	0x007DBD74, //:Crystal Warpick
	0x007DBDD8, //:Fire Warpick
	0x007DBE3C, //:Chaos Warpick
	0x007DBEA0, //:Lightning Warpick
	0x007DBF04, //:Deep Warpick
	0x007DBF68, //:Dark Warpick
	0x007DBFCC, //:Poison Warpick
	0x007DC030, //:Blood Warpick
	0x007DC094, //:Raw Warpick
	0x007DC0F8, //:Blessed Warpick
	0x007DC15C, //:Hollow Warpick
	0x007DE290, //:Pickaxe
	0x007DE2F4, //:Heavy Pickaxe
	0x007DE358, //:Sharp Pickaxe
	0x007DE3BC, //:Refined Pickaxe
	0x007DE420, //:Simple Pickaxe
	0x007DE484, //:Crystal Pickaxe
	0x007DE4E8, //:Fire Pickaxe
	0x007DE54C, //:Chaos Pickaxe
	0x007DE5B0, //:Lightning Pickaxe
	0x007DE614, //:Deep Pickaxe
	0x007DE678, //:Dark Pickaxe
	0x007DE6DC, //:Poison Pickaxe
	0x007DE740, //:Blood Pickaxe
	0x007DE7A4, //:Raw Pickaxe
	0x007DE808, //:Blessed Pickaxe
	0x007DE86C, //:Hollow Pickaxe
	0x007E09A0, //:Dragon Tooth
	0x007E30B0, //:Smough's Great Hammer
	0x007E57C0, //:Blacksmith Hammer
	0x007E5824, //:Heavy Blacksmith Hammer
	0x007E5888, //:Sharp Blacksmith Hammer
	0x007E58EC, //:Refined Blacksmith Hammer
	0x007E5950, //:Simple Blacksmith Hammer
	0x007E59B4, //:Crystal Blacksmith Hammer
	0x007E5A18, //:Fire Blacksmith Hammer
	0x007E5A7C, //:Chaos Blacksmith Hammer
	0x007E5AE0, //:Lightning Blacksmith Hammer
	0x007E5B44, //:Deep Blacksmith Hammer
	0x007E5BA8, //:Dark Blacksmith Hammer
	0x007E5C0C, //:Poison Blacksmith Hammer
	0x007E5C70, //:Blood Blacksmith Hammer
	0x007E5CD4, //:Raw Blacksmith Hammer
	0x007E5D38, //:Blessed Blacksmith Hammer
	0x007E5D9C, //:Hollow Blacksmith Hammer
	0x007E7ED0, //:Morne's Great Hammer
	0x007E7F34, //:Morne's Heavy Hammer
	0x007E7F98, //:Morne's Sharp Hammer
	0x007E7FFC, //:Morne's Refined Hammer
	0x007E8060, //:Morne's Simple Hammer
	0x007E80C4, //:Morne's Crystal Hammer
	0x007E8128, //:Morne's Fire Hammer
	0x007E818C, //:Morne's Chaos Hammer
	0x007E81F0, //:Morne's Lightning Hammer
	0x007E8254, //:Morne's Deep Hammer
	0x007E82B8, //:Morne's Dark Hammer
	0x007E831C, //:Morne's Poison Hammer
	0x007E8380, //:Morne's Blood Hammer
	0x007E83E4, //:Morne's Raw Hammer
	0x007E8448, //:Morne's Blessed Hammer
	0x007E84AC, //:Morne's Hollow Hammer
	0x007EA5E0, //:Spiked Mace
	0x007EA644, //:Heavy Spiked Mace
	0x007EA6A8, //:Sharp Spiked Mace
	0x007EA70C, //:Refined Spiked Mace
	0x007EA770, //:Simple Spiked Mace
	0x007EA7D4, //:Crystal Spiked Mace
	0x007EA838, //:Fire Spiked Mace
	0x007EA89C, //:Chaos Spiked Mace
	0x007EA900, //:Lightning Spiked Mace
	0x007EA964, //:Deep Spiked Mace
	0x007EA9C8, //:Dark Spiked Mace
	0x007EAA2C, //:Poison Spiked Mace
	0x007EAA90, //:Blood Spiked Mace
	0x007EAAF4, //:Raw Spiked Mace
	0x007EAB58, //:Blessed Spiked Mace
	0x007EABBC, //:Hollow Spiked Mace
	0x007ECCF0, //:Quakestone Hammer
	0x007EF400, //:Ledo's Great Hammer
	0x00895440, //:Spear
	0x008954A4, //:Heavy Spear
	0x00895508, //:Sharp Spear
	0x0089556C, //:Refined Spear
	0x008955D0, //:Simple Spear
	0x00895634, //:Crystal Spear
	0x00895698, //:Fire Spear
	0x008956FC, //:Chaos Spear
	0x00895760, //:Lightning Spear
	0x008957C4, //:Deep Spear
	0x00895828, //:Dark Spear
	0x0089588C, //:Poison Spear
	0x008958F0, //:Blood Spear
	0x00895954, //:Raw Spear
	0x008959B8, //:Blessed Spear
	0x00895A1C, //:Hollow Spear
	0x00897B50, //:Winged Spear
	0x00897BB4, //:Heavy Winged Spear
	0x00897C18, //:Sharp Winged Spear
	0x00897C7C, //:Refined Winged Spear
	0x00897CE0, //:Simple Winged Spear
	0x00897D44, //:Crystal Winged Spear
	0x00897DA8, //:Fire Winged Spear
	0x00897E0C, //:Chaos Winged Spear
	0x00897E70, //:Lightning Winged Spear
	0x00897ED4, //:Deep Winged Spear
	0x00897F38, //:Dark Winged Spear
	0x00897F9C, //:Poison Winged Spear
	0x00898000, //:Blood Winged Spear
	0x00898064, //:Raw Winged Spear
	0x008980C8, //:Blessed Winged Spear
	0x0089812C, //:Hollow Winged Spear
	0x0089C970, //:Partizan
	0x0089C9D4, //:Heavy Partizan
	0x0089CA38, //:Sharp Partizan
	0x0089CA9C, //:Refined Partizan
	0x0089CB00, //:Simple Partizan
	0x0089CB64, //:Crystal Partizan
	0x0089CBC8, //:Fire Partizan
	0x0089CC2C, //:Chaos Partizan
	0x0089CC90, //:Lightning Partizan
	0x0089CCF4, //:Deep Partizan
	0x0089CD58, //:Dark Partizan
	0x0089CDBC, //:Poison Partizan
	0x0089CE20, //:Blood Partizan
	0x0089CE84, //:Raw Partizan
	0x0089CEE8, //:Blessed Partizan
	0x0089CF4C, //:Hollow Partizan
	0x008A8CC0, //:Greatlance
	0x008A8D24, //:Heavy Greatlance
	0x008A8D88, //:Sharp Greatlance
	0x008A8DEC, //:Refined Greatlance
	0x008A8E50, //:Simple Greatlance
	0x008A8EB4, //:Crystal Greatlance
	0x008A8F18, //:Fire Greatlance
	0x008A8F7C, //:Chaos Greatlance
	0x008A8FE0, //:Lightning Greatlance
	0x008A9044, //:Deep Greatlance
	0x008A90A8, //:Dark Greatlance
	0x008A910C, //:Poison Greatlance
	0x008A9170, //:Blood Greatlance
	0x008A91D4, //:Raw Greatlance
	0x008A9238, //:Blessed Greatlance
	0x008A929C, //:Hollow Greatlance
	0x008AB3D0, //:Lothric Knight Long Spear
	0x008AB434, //:Heavy Lothric Long Spear
	0x008AB498, //:Sharp Lothric Long Spear
	0x008AB4FC, //:Refined Lothric Long Spear
	0x008AB560, //:Simple Lothric Long Spear
	0x008AB5C4, //:Crystal Lothric Long Spear
	0x008AB628, //:Fire Lothric Long Spear
	0x008AB68C, //:Chaos Lothric Long Spear
	0x008AB6F0, //:Lightning Lothric Long Spear
	0x008AB754, //:Deep Lothric Long Spear
	0x008AB7B8, //:Dark Lothric Long Spear
	0x008AB81C, //:Poison Lothric Long Spear
	0x008AB880, //:Blood Lothric Long Spear
	0x008AB8E4, //:Raw Lothric Long Spear
	0x008AB948, //:Blessed Lothric Long Spear
	0x008AB9AC, //:Hollow Lothric Long Spear
	0x008ADAE0, //:Four-Pronged Plow
	0x008ADB44, //:Heavy Four-Pronged Plow
	0x008ADBA8, //:Sharp Four-Pronged Plow
	0x008ADC0C, //:Refined Four-Pronged Plow
	0x008ADC70, //:Simple Four-Pronged Plow
	0x008ADCD4, //:Crystal Four-Pronged Plow
	0x008ADD38, //:Fire Four-Pronged Plow
	0x008ADD9C, //:Chaos Four-Pronged Plow
	0x008ADE00, //:Lightning Four-Pronged Plow
	0x008ADE64, //:Deep Four-Pronged Plow
	0x008ADEC8, //:Dark Four-Pronged Plow
	0x008ADF2C, //:Poison Four-Pronged Plow
	0x008ADF90, //:Blood Four-Pronged Plow
	0x008ADFF4, //:Raw Four-Pronged Plow
	0x008AE058, //:Blessed Four-Pronged Plow
	0x008AE0BC, //:Hollow Four-Pronged Plow
	0x008B01F0, //:Gargoyle Flame Spear
	0x008B2900, //:Rotten Ghru Spear
	0x008B2964, //:Heavy Rotten Ghru Spear
	0x008B29C8, //:Sharp Rotten Ghru Spear
	0x008B2A2C, //:Refined Rotten Ghru Spear
	0x008B2A90, //:Simple Rotten Ghru Spear
	0x008B2AF4, //:Crystal Rotten Ghru Spear
	0x008B2B58, //:Fire Rotten Ghru Spear
	0x008B2BBC, //:Chaos Rotten Ghru Spear
	0x008B2C20, //:Lightning Rotten Ghru Spear
	0x008B2C84, //:Deep Rotten Ghru Spear
	0x008B2CE8, //:Dark Rotten Ghru Spear
	0x008B2D4C, //:Poison Rotten Ghru Spear
	0x008B2DB0, //:Blood Rotten Ghru Spear
	0x008B2E14, //:Raw Rotten Ghru Spear
	0x008B2E78, //:Blessed Rotten Ghru Spear
	0x008B2EDC, //:Hollow Rotten Ghru Spear
	0x008B5010, //:Tailbone Spear
	0x008B7720, //:Soldering Iron
	0x008B7784, //:Heavy Soldering Iron
	0x008B77E8, //:Sharp Soldering Iron
	0x008B784C, //:Refined Soldering Iron
	0x008B78B0, //:Simple Soldering Iron
	0x008B7914, //:Crystal Soldering Iron
	0x008B7978, //:Fire Soldering Iron
	0x008B79DC, //:Chaos Soldering Iron
	0x008B7A40, //:Lightning Soldering Iron
	0x008B7AA4, //:Deep Soldering Iron
	0x008B7B08, //:Dark Soldering Iron
	0x008B7B6C, //:Poison Soldering Iron
	0x008B7BD0, //:Blood Soldering Iron
	0x008B7C34, //:Raw Soldering Iron
	0x008B7C98, //:Blessed Soldering Iron
	0x008B7CFC, //:Hollow Soldering Iron
	0x008BC540, //:Dragonslayer Swordspear
	0x008BEC50, //:Arstor's Spear
	0x008C1360, //:Saint Bident
	0x008C13C4, //:Heavy Saint Bident
	0x008C1428, //:Sharp Saint Bident
	0x008C148C, //:Refined Saint Bident
	0x008C14F0, //:Simple Saint Bident
	0x008C1554, //:Crystal Saint Bident
	0x008C15B8, //:Fire Saint Bident
	0x008C161C, //:Chaos Saint Bident
	0x008C1680, //:Lightning Saint Bident
	0x008C16E4, //:Deep Saint Bident
	0x008C1748, //:Dark Saint Bident
	0x008C17AC, //:Poison Saint Bident
	0x008C1810, //:Blood Saint Bident
	0x008C1874, //:Raw Saint Bident
	0x008C18D8, //:Blessed Saint Bident
	0x008C193C, //:Hollow Saint Bident
	0x008C3A70, //:Yorshka's Spear
	0x008C6180, //:Pike
	0x008C61E4, //:Heavy Pike
	0x008C6248, //:Sharp Pike
	0x008C62AC, //:Refined Pike
	0x008C6310, //:Simple Pike
	0x008C6374, //:Crystal Pike
	0x008C63D8, //:Fire Pike
	0x008C643C, //:Chaos Pike
	0x008C64A0, //:Lightning Pike
	0x008C6504, //:Deep Pike
	0x008C6568, //:Dark Pike
	0x008C65CC, //:Poison Pike
	0x008C6630, //:Blood Pike
	0x008C6694, //:Raw Pike
	0x008C66F8, //:Blessed Pike
	0x008C675C, //:Hollow Pike
	0x008C8890, //:Channeler's Trident
	0x008C88F4, //:Heavy Four-pronged Plow
	0x008C8958, //:Sharp Four-pronged Plow
	0x008C89BC, //:Refined Four-pronged Plow
	0x008C8A20, //:Simpleton Four-pronged Plow
	0x008C8A84, //:Crystal Four-pronged Plow
	0x008C8AE8, //:Fire Four-pronged Plow
	0x008C8B4C, //:Chaos Four-pronged Plow
	0x008C8BB0, //:Lightning Four-pronged Plow
	0x008C8C14, //:Deep Four-pronged Plow
	0x008C8C78, //:Dark Four-pronged Plow
	0x008C8CDC, //:Poison Four-pronged Plow
	0x008C8D40, //:Blood Four-pronged Plow
	0x008C8DA4, //:Raw Four-pronged Plow
	0x008C8E08, //:Blessed Four-pronged Plow
	0x008C8E6C, //:Hollow Four-pronged Plow
	0x008CAFA0, //:Dragonslayer Spear
	0x008CD6B0, //:Follower Javelin
	0x008CFDC0, //:Ringed Knight Spear
	0x008D24D0, //:Lothric War Banner
	0x008D4BE0, //:Crucifix of the Mad King (Halberd)
	0x00989680, //:Great Scythe
	0x009896E4, //:Heavy Great Scythe
	0x00989748, //:Sharp Great Scythe
	0x009897AC, //:Refined Great Scythe
	0x00989810, //:Simple Great Scythe
	0x00989874, //:Crystal Great Scythe
	0x009898D8, //:Fire Great Scythe
	0x0098993C, //:Chaos Great Scythe
	0x009899A0, //:Lightning Great Scythe
	0x00989A04, //:Deep Great Scythe
	0x00989A68, //:Dark Great Scythe
	0x00989ACC, //:Poison Great Scythe
	0x00989B30, //:Blood Great Scythe
	0x00989B94, //:Raw Great Scythe
	0x00989BF8, //:Blessed Great Scythe
	0x00989C5C, //:Hollow Great Scythe
	0x0098BD90, //:Lucerne
	0x0098BDF4, //:Heavy Lucerne
	0x0098BE58, //:Sharp Lucerne
	0x0098BEBC, //:Refined Lucerne
	0x0098BF20, //:Simple Lucerne
	0x0098BF84, //:Crystal Lucerne
	0x0098BFE8, //:Fire Lucerne
	0x0098C04C, //:Chaos Lucerne
	0x0098C0B0, //:Lightning Lucerne
	0x0098C114, //:Deep Lucerne
	0x0098C178, //:Dark Lucerne
	0x0098C1DC, //:Poison Lucerne
	0x0098C240, //:Blood Lucerne
	0x0098C2A4, //:Raw Lucerne
	0x0098C308, //:Blessed Lucerne
	0x0098C36C, //:Hollow Lucerne
	0x0098E4A0, //:Glaive
	0x0098E504, //:Heavy Glaive
	0x0098E568, //:Sharp Glaive
	0x0098E5CC, //:Refined Glaive
	0x0098E630, //:Simple Glaive
	0x0098E694, //:Crystal Glaive
	0x0098E6F8, //:Fire Glaive
	0x0098E75C, //:Chaos Glaive
	0x0098E7C0, //:Lightning Glaive
	0x0098E824, //:Deep Glaive
	0x0098E888, //:Dark Glaive
	0x0098E8EC, //:Poison Glaive
	0x0098E950, //:Blood Glaive
	0x0098E9B4, //:Raw Glaive
	0x0098EA18, //:Blessed Glaive
	0x0098EA7C, //:Hollow Glaive
	0x00990BB0, //:Halberd
	0x00990C14, //:Heavy Halberd
	0x00990C78, //:Sharp Halberd
	0x00990CDC, //:Refined Halberd
	0x00990D40, //:Simple Halberd
	0x00990DA4, //:Crystal Halberd
	0x00990E08, //:Fire Halberd
	0x00990E6C, //:Chaos Halberd
	0x00990ED0, //:Lightning Halberd
	0x00990F34, //:Deep Halberd
	0x00990F98, //:Dark Halberd
	0x00990FFC, //:Poison Halberd
	0x00991060, //:Blood Halberd
	0x009910C4, //:Raw Halberd
	0x00991128, //:Blessed Halberd
	0x0099118C, //:Hollow Halberd
	0x009959D0, //:Black Knight Greataxe
	0x00995A34, //:Heavy Black Knight Greataxe
	0x00995A98, //:Sharp Black Knight Greataxe
	0x00995AFC, //:Refined Black Knight Greataxe
	0x00995B60, //:Simple Black Knight Greataxe
	0x00995BC4, //:Crystal Black Knight Greataxe
	0x00995C28, //:Fire Black Knight Greataxe
	0x00995C8C, //:Chaos Black Knight Greataxe
	0x00995CF0, //:Lightning Black Knight Greataxe
	0x00995D54, //:Deep Black Knight Greataxe
	0x00995DB8, //:Dark Black Knight Greataxe
	0x00995E1C, //:Poison Black Knight Greataxe
	0x00995E80, //:Blood Black Knight Greataxe
	0x00995EE4, //:Raw Black Knight Greataxe
	0x00995F48, //:Blessed Black Knight Greataxe
	0x00995FAC, //:Hollow Black Knight Greataxe
	0x0099A7F0, //:Pontiff Knight Great Scythe
	0x0099CF00, //:Great Corvian Scythe
	0x0099CF64, //:Heavy Corvian Scythe
	0x0099CFC8, //:Sharp Corvian Scythe
	0x0099D02C, //:Refined Corvian Scythe
	0x0099D090, //:Simple Corvian Scythe
	0x0099D0F4, //:Crystal Corvian Scythe
	0x0099D158, //:Fire Corvian Scythe
	0x0099D1BC, //:Chaos Corvian Scythe
	0x0099D220, //:Lightning Corvian Scythe
	0x0099D284, //:Deep Corvian Scythe
	0x0099D2E8, //:Dark Corvian Scythe
	0x0099D34C, //:Poison Corvian Scythe
	0x0099D3B0, //:Blood Corvian Scythe
	0x0099D414, //:Raw Corvian Scythe
	0x0099D478, //:Blessed Corvian Scythe
	0x0099D4DC, //:Hollow Corvian Scythe
	0x0099F610, //:Winged Knight Halberd
	0x0099F674, //:Heavy Winged Knight Halberd
	0x0099F6D8, //:Sharp Winged Knight Halberd
	0x0099F73C, //:Refined Winged Knight Halberd
	0x0099F7A0, //:Simple Winged Knight Halberd
	0x0099F804, //:Crystal Winged Knight Halberd
	0x0099F868, //:Fire Winged Knight Halberd
	0x0099F8CC, //:Chaos Winged Knight Halberd
	0x0099F930, //:Lightning Winged Knight Halberd
	0x0099F994, //:Deep Winged Knight Halberd
	0x0099F9F8, //:Dark Winged Knight Halberd
	0x0099FA5C, //:Poison Winged Knight Halberd
	0x0099FAC0, //:Blood Winged Knight Halberd
	0x0099FB24, //:Raw Winged Knight Halberd
	0x0099FB88, //:Blessed Winged Knight Halberd
	0x0099FBEC, //:Hollow Winged Knight Halberd
	0x009A1D20, //:Gundyr's Halberd
	0x009A4430, //:Lothric's Scythe
	0x009A6B40, //:Ancient Dragon Halberd
	0x009A9250, //:Scythe of Want
	0x009AB960, //:Red Hilted Halberd
	0x009AB9C4, //:Heavy Red Halberd
	0x009ABA28, //:Sharp Red Halberd
	0x009ABA8C, //:Refined Red Halberd
	0x009ABAF0, //:Simple Red Halberd
	0x009ABB54, //:Crystal Red Halberd
	0x009ABBB8, //:Fire Red Halberd
	0x009ABC1C, //:Chaos Red Halberd
	0x009ABC80, //:Lightning Red Halberd
	0x009ABCE4, //:Deep Red Halberd
	0x009ABD48, //:Dark Red Halberd
	0x009ABDAC, //:Poison Red Halberd
	0x009ABE10, //:Blood Red Halberd
	0x009ABE74, //:Raw Red Halberd
	0x009ABED8, //:Blessed Red Halberd
	0x009ABF3C, //:Hollow Red Halberd
	0x009AE070, //:Black Knight Glaive
	0x009AE0D4, //:Heavy Black Knight Glaive
	0x009AE138, //:Sharp Black Knight Glaive
	0x009AE19C, //:Refined Black Knight Glaive
	0x009AE200, //:Simple Black Knight Glaive
	0x009AE264, //:Crystal Black Knight Glaive
	0x009AE2C8, //:Fire Black Knight Glaive
	0x009AE32C, //:Chaos Black Knight Glaive
	0x009AE390, //:Lightning Black Knight Glaive
	0x009AE3F4, //:Deep Black Knight Glaive
	0x009AE458, //:Dark Black Knight Glaive
	0x009AE4BC, //:Poison Black Knight Glaive
	0x009AE520, //:Blood Black Knight Glaive
	0x009AE584, //:Raw Black Knight Glaive
	0x009AE5E8, //:Blessed Black Knight Glaive
	0x009AE64C, //:Hollow Black Knight Glaive
	0x009B0780, //:Immolation Tinder
	0x009B2E90, //:Splitleaf Greatsword (It's a Halberd)
	0x009B55A0, //:Friede's Great Scythe
	0x00A7D8C0, //:Claw
	0x00A7D924, //:Heavy Claw
	0x00A7D988, //:Sharp Claw
	0x00A7D9EC, //:Skilled Claw
	0x00A7DA50, //:Simple Claw
	0x00A7DAB4, //:Crystal Claw
	0x00A7DB18, //:Fire Claw
	0x00A7DB7C, //:Chaos Claw
	0x00A7DBE0, //:Lightning Claw
	0x00A7DC44, //:Deep Claw
	0x00A7DCA8, //:Dark Claw
	0x00A7DD0C, //:Poison Claw
	0x00A7DD70, //:Blood Claw
	0x00A7DDD4, //:Raw Claw
	0x00A7DE38, //:Blessed Claw
	0x00A7DE9C, //:Hollow Claw
	0x00A7FFD0, //:Caestus
	0x00A80034, //:Heavy Caestus
	0x00A80098, //:Sharp Caestus
	0x00A800FC, //:Skilled Caestus
	0x00A80160, //:Simple Caestus
	0x00A801C4, //:Crystal Caestus
	0x00A80228, //:Fire Caestus
	0x00A8028C, //:Chaos Caestus
	0x00A802F0, //:Lightning Caestus
	0x00A80354, //:Deep Caestus
	0x00A803B8, //:Dark Caestus
	0x00A8041C, //:Poison Caestus
	0x00A80480, //:Blood Caestus
	0x00A804E4, //:Raw Caestus
	0x00A80548, //:Blessed Caestus
	0x00A805AC, //:Hollow Caestus
	0x00A826E0, //:Manikin Claws
	0x00A82744, //:Heavy Manikin Claws
	0x00A827A8, //:Sharp Manikin Claws
	0x00A8280C, //:Skilled Manikin Claws
	0x00A82870, //:Simple Manikin Claws
	0x00A828D4, //:Crystal Manikin Claws
	0x00A82938, //:Fire Manikin Claws
	0x00A8299C, //:Chaos Manikin Claws
	0x00A82A00, //:Lightning Manikin Claws
	0x00A82A64, //:Deep Manikin Claws
	0x00A82AC8, //:Dark Manikin Claws
	0x00A82B2C, //:Poison Manikin Claws
	0x00A82B90, //:Blood Manikin Claws
	0x00A82BF4, //:Raw Manikin Claws
	0x00A82C58, //:Blessed Manikin Claws
	0x00A82CBC, //:Hollow Manikin Claws
	0x00A84DF0, //:Demon's Fist
	0x00A87500, //:Dark Hand
	0x00A89C10, //:Crow Talons
	0x00B71B00, //:Whip
	0x00B71B64, //:Heavy Whip
	0x00B71BC8, //:Sharp Whip
	0x00B71C2C, //:Skilled Whip
	0x00B71C90, //:Simple Whip
	0x00B71CF4, //:Crystal Whip
	0x00B71D58, //:Fire Whip
	0x00B71DBC, //:Chaos Whip
	0x00B71E20, //:Lightning Whip
	0x00B71E84, //:Deep Whip
	0x00B71EE8, //:Dark Whip
	0x00B71F4C, //:Poison Whip
	0x00B71FB0, //:Blood Whip
	0x00B72014, //:Raw Whip
	0x00B72078, //:Blessed Whip
	0x00B720DC, //:Hollow Whip
	0x00B7B740, //:Witch's Locks
	0x00B7DE50, //:Notched Whip
	0x00B7DEB4, //:Heavy Notched Whip
	0x00B7DF18, //:Sharp Notched Whip
	0x00B7DF7C, //:Skilled Notched Whip
	0x00B7DFE0, //:Simple Notched Whip
	0x00B7E044, //:Crystal Notched Whip
	0x00B7E0A8, //:Fire Notched Whip
	0x00B7E10C, //:Chaos Notched Whip
	0x00B7E170, //:Lightning Notched Whip
	0x00B7E1D4, //:Deep Notched Whip
	0x00B7E238, //:Dark Notched Whip
	0x00B7E29C, //:Poison Notched Whip
	0x00B7E300, //:Blood Notched Whip
	0x00B7E364, //:Raw Notched Whip
	0x00B7E3C8, //:Blessed Notched Whip
	0x00B7E42C, //:Hollow Notched Whip
	0x00B80560, //:Spotted Whip
	0x00B82C70, //:Rose of Ariandel
	0x00C72090, //:Talisman
	0x00C747A0, //:Sorcerer's Staff
	0x00C76EB0, //:Storyteller's Staff
	0x00C795C0, //:Mendicant's Staff
	0x00C7E3E0, //:Man-grub's Staff
	0x00C80AF0, //:Archdeacon's Great Staff
	0x00C83200, //:Golden Ritual Spear
	0x00C88020, //:Yorshka's Chime
	0x00C8A730, //:Sacred Beast Catalyst
	0x00C8CE40, //:Sage's Crystal Staff
	0x00C8F550, //:Heretic's Staff
	0x00C91C60, //:Court Sorcerer's Staff
	0x00C94370, //:Witchtree Branch
	0x00C96A80, //:Izalith Staff
	0x00C99190, //:Cleric's Sacred Chime
	0x00C9B8A0, //:Priest's Chime
	0x00C9DFB0, //:Saint-tree Bellvine
	0x00CA06C0, //:Caitha's Chime
	0x00CA2DD0, //:Crystal Chime
	0x00CA54E0, //:Sunlight Talisman
	0x00CA7BF0, //:Canvas Talisman
	0x00CAA300, //:Sunless Talisman
	0x00CACA10, //:Saint's Talisman
	0x00CAF120, //:White Hair Talisman
	0x00CC77C0, //:Pyromancy Flame
	0x00CC9ED0, //:Deep Pyromancy Flame
	0x00CC9ED0, //:Pyromancer's Parting Flame
	0x00CCC5E0, //:Murky Longstaff
	0x00CCECF0, //:Sacred Chime of Filianore
	0x00CD1400, //:Preacher's Right Arm
	0x00CD3B10, //:Flickering Pyromancy Flame
	0x00CD6220, //:Strong Pyromancy Flame
	0x00CDFE60, //:Deep Pyromancy Flame
	0x00CE2570, //:Pitch-Dark Pyromancy Flame
	0x00CF8500, //:Dragonslayer Greatbow
	0x00D5C690, //:Short Bow
	0x00D5C6F4, //:Heavy Short Bow
	0x00D5C758, //:Sharp Short Bow
	0x00D5C7BC, //:Refined Short Bow
	0x00D5C820, //:Simpleton Short Bow
	0x00D5C884, //:Crystal Short Bow
	0x00D5C8E8, //:Fire Short Bow
	0x00D5C94C, //:Chaos Short Bow
	0x00D5C9B0, //:Lightning Short Bow
	0x00D5CA14, //:Deep Short Bow
	0x00D5CA78, //:Dark Short Bow
	0x00D5CADC, //:Poison Short Bow
	0x00D5CB40, //:Blood Short Bow
	0x00D5CBA4, //:Raw Short Bow
	0x00D5CC08, //:Blessed Short Bow
	0x00D5CC6C, //:Hollow Short Bow
	0x00D5EDA0, //:Composite Bow
	0x00D5EE04, //:Heavy Composite Bow
	0x00D5EE68, //:Sharp Composite Bow
	0x00D5EECC, //:Refined Composite Bow
	0x00D5EF30, //:Simpleton Composite Bow
	0x00D5EF94, //:Crystal Composite Bow
	0x00D5EFF8, //:Fire Composite Bow
	0x00D5F05C, //:Chaos Composite Bow
	0x00D5F0C0, //:Lightning Composite Bow
	0x00D5F124, //:Deep Composite Bow
	0x00D5F188, //:Dark Composite Bow
	0x00D5F1EC, //:Poison Composite Bow
	0x00D5F250, //:Blood Composite Bow
	0x00D5F2B4, //:Raw Composite Bow
	0x00D5F318, //:Blessed Composite Bow
	0x00D5F37C, //:Hollow Composite Bow
	0x00D63BC0, //:Light Crossbow
	0x00D63C24, //:Heavy Soldier's Crossbow
	0x00D63C88, //:Sharp Soldier's Crossbow
	0x00D63CEC, //:Refined Soldier's Crossbow
	0x00D63D50, //:Simpleton Soldier's Crossbow
	0x00D63DB4, //:Crystal Soldier's Crossbow
	0x00D63E18, //:Fire Soldier's Crossbow
	0x00D63E7C, //:Chaos Soldier's Crossbow
	0x00D63EE0, //:Lightning Soldier's Crossbow
	0x00D63F44, //:Deep Soldier's Crossbow
	0x00D63FA8, //:Dark Soldier's Crossbow
	0x00D6400C, //:Poison Soldier's Crossbow
	0x00D64070, //:Blood Soldier's Crossbow
	0x00D640D4, //:Raw Soldier's Crossbow
	0x00D64138, //:Blessed Soldier's Crossbow
	0x00D6419C, //:Hollow Soldier's Crossbow
	0x00D662D0, //:Arbalest
	0x00D66334, //:Heavy Heavy Crossbow
	0x00D66398, //:Sharp Heavy Crossbow
	0x00D663FC, //:Refined Heavy Crossbow
	0x00D66460, //:Simpleton Heavy Crossbow
	0x00D664C4, //:Crystal Heavy Crossbow
	0x00D66528, //:Fire Heavy Crossbow
	0x00D6658C, //:Chaos Heavy Crossbow
	0x00D665F0, //:Lightning Heavy Crossbow
	0x00D66654, //:Deep Heavy Crossbow
	0x00D666B8, //:Dark Heavy Crossbow
	0x00D6671C, //:Poison Heavy Crossbow
	0x00D66780, //:Blood Heavy Crossbow
	0x00D667E4, //:Raw Heavy Crossbow
	0x00D66848, //:Blessed Heavy Crossbow
	0x00D668AC, //:Hollow Heavy Crossbow
	0x00D689E0, //:Longbow
	0x00D68A44, //:Heavy Longbow
	0x00D68AA8, //:Sharp Longbow
	0x00D68B0C, //:Refined Longbow
	0x00D68B70, //:Simpleton Longbow
	0x00D68BD4, //:Crystal Longbow
	0x00D68C38, //:Fire Longbow
	0x00D68C9C, //:Chaos Longbow
	0x00D68D00, //:Lightning Longbow
	0x00D68D64, //:Deep Longbow
	0x00D68DC8, //:Dark Longbow
	0x00D68E2C, //:Poison Longbow
	0x00D68E90, //:Blood Longbow
	0x00D68EF4, //:Raw Longbow
	0x00D68F58, //:Blessed Longbow
	0x00D68FBC, //:Hollow Longbow
	0x00D6B0F0, //:Dragonrider Bow
	0x00D6B154, //:Heavy Dragonrider Bow
	0x00D6B1B8, //:Sharp Dragonrider Bow
	0x00D6B21C, //:Refined Dragonrider Bow
	0x00D6B280, //:Simple Dragonrider Bow
	0x00D6B2E4, //:Crystal Dragonrider Bow
	0x00D6B348, //:Fire Dragonrider Bow
	0x00D6B3AC, //:Chaos Dragonrider Bow
	0x00D6B410, //:Lightning Dragonrider Bow
	0x00D6B474, //:Deep Dragonrider Bow
	0x00D6B4D8, //:Dark Dragonrider Bow
	0x00D6B53C, //:Poison Dragonrider Bow
	0x00D6B5A0, //:Blood Dragonrider Bow
	0x00D6B604, //:Raw Dragonrider Bow
	0x00D6B668, //:Blessed Dragonrider Bow
	0x00D6B6CC, //:Hollow Dragonrider Bow
	0x00D6FF10, //:Avelyn
	0x00D6FF74, //:Heavy Avelyn
	0x00D6FFD8, //:Sharp Avelyn
	0x00D7003C, //:Refined Avelyn
	0x00D700A0, //:Simpleton Avelyn
	0x00D70104, //:Crystal Avelyn
	0x00D70168, //:Fire Avelyn
	0x00D701CC, //:Chaos Avelyn
	0x00D70230, //:Lightning Avelyn
	0x00D70294, //:Deep Avelyn
	0x00D702F8, //:Dark Avelyn
	0x00D7035C, //:Poison Avelyn
	0x00D703C0, //:Blood Avelyn
	0x00D70424, //:Raw Avelyn
	0x00D70488, //:Blessed Avelyn
	0x00D704EC, //:Hollow Avelyn
	0x00D72620, //:Knight's Crossbow
	0x00D72684, //:Heavy Knight's Crossbow
	0x00D726E8, //:Sharp Knight's Crossbow
	0x00D7274C, //:Refined Knight's Crossbow
	0x00D727B0, //:Simpleton Knight's Crossbow
	0x00D72814, //:Crystal Knight's Crossbow
	0x00D72878, //:Fire Knight's Crossbow
	0x00D728DC, //:Chaos Knight's Crossbow
	0x00D72940, //:Lightning Knight's Crossbow
	0x00D729A4, //:Deep Knight's Crossbow
	0x00D72A08, //:Dark Knight's Crossbow
	0x00D72A6C, //:Poison Knight's Crossbow
	0x00D72AD0, //:Blood Knight's Crossbow
	0x00D72B34, //:Raw Knight's Crossbow
	0x00D72B98, //:Blessed Knight's Crossbow
	0x00D72BFC, //:Hollow Knight's Crossbow
	0x00D74D30, //:Heavy Crossbow
	0x00D74D94, //:Heavy Temple Knight's Crossbow
	0x00D74DF8, //:Sharp Temple Knight's Crossbow
	0x00D74E5C, //:Refined Temple Knight's Crossbow
	0x00D74EC0, //:Simpleton Temple Knight's Crossbow
	0x00D74F24, //:Crystal Temple Knight's Crossbow
	0x00D74F88, //:Fire Temple Knight's Crossbow
	0x00D74FEC, //:Chaos Temple Knight's Crossbow
	0x00D75050, //:Lightning Temple Knight's Crossbow
	0x00D750B4, //:Deep Temple Knight's Crossbow
	0x00D75118, //:Dark Temple Knight's Crossbow
	0x00D7517C, //:Poison Temple Knight's Crossbow
	0x00D751E0, //:Blood Temple Knight's Crossbow
	0x00D75244, //:Raw Temple Knight's Crossbow
	0x00D752A8, //:Blessed Temple Knight's Crossbow
	0x00D7530C, //:Hollow Temple Knight's Crossbow
	0x00D77440, //:Dancer's Short Bow
	0x00D77440, //:White Tree Bow (White Birch Bow)
	0x00D79B50, //:Darkmoon Longbow
	0x00D7C260, //:Onislayer Greatbow
	0x00D7E970, //:Black Bow of Pharis
	0x00D7E9D4, //:Heavy Bow of Pharis
	0x00D7EA38, //:Sharp Bow of Pharis
	0x00D7EA9C, //:Refined Bow of Pharis
	0x00D7EB00, //:Simpleton Bow of Pharis
	0x00D7EB64, //:Crystal Bow of Pharis
	0x00D7EBC8, //:Fire Bow of Pharis
	0x00D7EC2C, //:Chaos Bow of Pharis
	0x00D7EC90, //:Lightning Bow of Pharis
	0x00D7ECF4, //:Deep Bow of Pharis
	0x00D7ED58, //:Dark Bow of Pharis
	0x00D7EDBC, //:Poison Bow of Pharis
	0x00D7EE20, //:Blood Bow of Pharis
	0x00D7EE84, //:Raw Bow of Pharis
	0x00D7EEE8, //:Blessed Bow of Pharis
	0x00D7EF4C, //:Hollow Bow of Pharis
	0x00D81080, //:Shield Crossbow
	0x00D83790, //:Sniper Crossbow
	0x00D837F4, //:Heavy Sniper Crossbow
	0x00D83858, //:Sharp Sniper Crossbow
	0x00D838BC, //:Refined Sniper Crossbow
	0x00D83920, //:Simpleton Sniper Crossbow
	0x00D83984, //:Crystal Sniper Crossbow
	0x00D839E8, //:Fire Sniper Crossbow
	0x00D83A4C, //:Chaos Sniper Crossbow
	0x00D83AB0, //:Lightning Sniper Crossbow
	0x00D83B14, //:Deep Sniper Crossbow
	0x00D83B78, //:Dark Sniper Crossbow
	0x00D83BDC, //:Poison Sniper Crossbow
	0x00D83C40, //:Blood Sniper Crossbow
	0x00D83CA4, //:Raw Sniper Crossbow
	0x00D83D08, //:Blessed Sniper Crossbow
	0x00D83D6C, //:Hollow Sniper Crossbow
	0x00D85EA0, //:Millwood Greatbow
	0x00D885B0, //:Repeating Crossbow
	0x00F42400, //:Sellsword Twinblades
	0x00F42464, //:Heavy Sellsword Twinblades
	0x00F424C8, //:Sharp Sellsword Twinblades
	0x00F4252C, //:Refined Sellsword Twinblades
	0x00F42590, //:Simple Sellsword Twinblades
	0x00F425F4, //:Crystal Sellsword Twinblades
	0x00F42658, //:Fire Sellsword Twinblades
	0x00F426BC, //:Chaos Sellsword Twinblades
	0x00F42720, //:Lightning Sellsword Twinblades
	0x00F42784, //:Deep Sellsword Twinblades
	0x00F427E8, //:Dark Sellsword Twinblades
	0x00F4284C, //:Poison Sellsword Twinblades
	0x00F428B0, //:Blood Sellsword Twinblades
	0x00F42914, //:Raw Sellsword Twinblades
	0x00F42978, //:Blessed Sellsword Twinblades
	0x00F429DC, //:Hollow Sellsword Twinblades
	0x00F47220, //:Warden Twinblades
	0x00F47284, //:Heavy Warden Twinblades
	0x00F472E8, //:Sharp Warden Twinblades
	0x00F4734C, //:Refined Warden Twinblades
	0x00F473B0, //:Simple Warden Twinblades
	0x00F47414, //:Crystal Warden Twinblades
	0x00F47478, //:Fire Warden Twinblades
	0x00F474DC, //:Chaos Warden Twinblades
	0x00F47540, //:Lightning Warden Twinblades
	0x00F475A4, //:Deep Warden Twinblades
	0x00F47608, //:Dark Warden Twinblades
	0x00F4766C, //:Poison Warden Twinblades
	0x00F476D0, //:Blood Warden Twinblades
	0x00F47734, //:Raw Warden Twinblades
	0x00F47798, //:Blessed Warden Twinblades
	0x00F477FC, //:Hollow Warden Twinblades
	0x00F49930, //:Winged Knight Twinaxes
	0x00F49994, //:Heavy Winged Knight Twinaxes
	0x00F499F8, //:Sharp Winged Knight Twinaxes
	0x00F49A5C, //:Refined Winged Knight Twinaxes
	0x00F49AC0, //:Simple Winged Knight Twinaxes
	0x00F49B24, //:Crystal Winged Knight Twinaxes
	0x00F49B88, //:Fire Winged Knight Twinaxes
	0x00F49BEC, //:Chaos Winged Knight Twinaxes
	0x00F49C50, //:Lightning Winged Knight Twinaxes
	0x00F49CB4, //:Deep Winged Knight Twinaxes
	0x00F49D18, //:Dark Winged Knight Twinaxes
	0x00F49D7C, //:Poison Winged Knight Twinaxes
	0x00F49DE0, //:Blood Winged Knight Twinaxes
	0x00F49E44, //:Raw Winged Knight Twinaxes
	0x00F49EA8, //:Blessed Winged Knight Twinaxes
	0x00F49F0C, //:Hollow Winged Knight Twinaxes
	0x00F4C040, //:Dancer's Enchanted Swords
	0x00F4E750, //:Great Machete
	0x00F4E7B4, //:Heavy Great Machete
	0x00F4E818, //:Sharp Great Machete
	0x00F4E87C, //:Refined Great Machete
	0x00F4E8E0, //:Simple Great Machete
	0x00F4E944, //:Crystal Great Machete
	0x00F4E9A8, //:Fire Great Machete
	0x00F4EA0C, //:Chaos Great Machete
	0x00F4EA70, //:Lightning Great Machete
	0x00F4EAD4, //:Deep Great Machete
	0x00F4EB38, //:Dark Great Machete
	0x00F4EB9C, //:Poison Great Machete
	0x00F4EC00, //:Blood Great Machete
	0x00F4EC64, //:Raw Great Machete
	0x00F4ECC8, //:Blessed Great Machete
	0x00F4ED2C, //:Hollow Great Machete
	0x00F50E60, //:Brigand Twindaggers
	0x00F50EC4, //:Heavy Brigand Twindaggers
	0x00F50F28, //:Sharp Brigand Twindaggers
	0x00F50F8C, //:Refined Brigand Twindaggers
	0x00F50FF0, //:Simple Brigand Twindaggers
	0x00F51054, //:Crystal Brigand Twindaggers
	0x00F510B8, //:Fire Brigand Twindaggers
	0x00F5111C, //:Chaos Brigand Twindaggers
	0x00F51180, //:Lightning Brigand Twindaggers
	0x00F511E4, //:Deep Brigand Twindaggers
	0x00F51248, //:Dark Brigand Twindaggers
	0x00F512AC, //:Poison Brigand Twindaggers
	0x00F51310, //:Blood Brigand Twindaggers
	0x00F51374, //:Raw Brigand Twindaggers
	0x00F513D8, //:Blessed Brigand Twindaggers
	0x00F5143C, //:Hollow Brigand Twindaggers
	0x00F53570, //:Gotthard Twinswords
	0x00F535D4, //:Heavy Gotthard Twinswords
	0x00F53638, //:Sharp Gotthard Twinswords
	0x00F5369C, //:Refined Gotthard Twinswords
	0x00F53700, //:Simple Gotthard Twinswords
	0x00F53764, //:Crystal Gotthard Twinswords
	0x00F537C8, //:Fire Gotthard Twinswords
	0x00F5382C, //:Chaos Gotthard Twinswords
	0x00F53890, //:Lightning Gotthard Twinswords
	0x00F538F4, //:Deep Gotthard Twinswords
	0x00F53958, //:Dark Gotthard Twinswords
	0x00F539BC, //:Poison Gotthard Twinswords
	0x00F53A20, //:Blood Gotthard Twinswords
	0x00F53A84, //:Raw Gotthard Twinswords
	0x00F53AE8, //:Blessed Gotthard Twinswords
	0x00F53B4C, //:Hollow Gotthard Twinswords
	0x00F55C80, //:Golden Dual Swords
	0x00F58390, //:Onikiri and Ubadachi
	0x00F583F4, //:Heavy Onikiri and Ubadachi
	0x00F58458, //:Sharp Onikiri and Ubadachi
	0x00F584BC, //:Refined Onikiri and Ubadachi
	0x00F58520, //:Simple Onikiri and Ubadachi
	0x00F58584, //:Crystal Onikiri and Ubadachi
	0x00F585E8, //:Fire Onikiri and Ubadachi
	0x00F5864C, //:Chaos Onikiri and Ubadachi
	0x00F586B0, //:Lightning Onikiri and Ubadachi
	0x00F58714, //:Deep Onikiri and Ubadachi
	0x00F58778, //:Dark Onikiri and Ubadachi
	0x00F587DC, //:Poison Onikiri and Ubadachi
	0x00F58840, //:Blood Onikiri and Ubadachi
	0x00F588A4, //:Raw Onikiri and Ubadachi
	0x00F58908, //:Blessed Onikiri and Ubadachi
	0x00F5896C, //:Hollow Onikiri and Ubadachi
	0x00F5AAA0, //:Drang Twinspears
	0x00F5AB04, //:Heavy Drang Twinspears
	0x00F5AB68, //:Sharp Drang Twinspears
	0x00F5ABCC, //:Refined Drang Twinspears
	0x00F5AC30, //:Simple Drang Twinspears
	0x00F5AC94, //:Crystal Drang Twinspears
	0x00F5ACF8, //:Fire Drang Twinspears
	0x00F5AD5C, //:Chaos Drang Twinspears
	0x00F5ADC0, //:Lightning Drang Twinspears
	0x00F5AE24, //:Deep Drang Twinspears
	0x00F5AE88, //:Dark Drang Twinspears
	0x00F5AEEC, //:Poison Drang Twinspears
	0x00F5AF50, //:Blood Drang Twinspears
	0x00F5AFB4, //:Raw Drang Twinspears
	0x00F5B018, //:Blessed Drang Twinspears
	0x00F5B07C, //:Hollow Drang Twinspears
	0x00F5F8C0, //:Great Door Twinshields
	0x00F61FD0, //:Drang Hammers
	0x00F62034, //:Heavy Drang Hammers
	0x00F62098, //:Sharp Drang Hammers
	0x00F620FC, //:Refined Drang Hammers
	0x00F62160, //:Simple Drang Hammers
	0x00F621C4, //:Crystal Drang Hammers
	0x00F62228, //:Fire Drang Hammers
	0x00F6228C, //:Chaos Drang Hammers
	0x00F622F0, //:Lightning Drang Hammers
	0x00F62354, //:Deep Drang Hammers
	0x00F623B8, //:Dark Drang Hammers
	0x00F6241C, //:Poison Drang Hammers
	0x00F62480, //:Blood Drang Hammers
	0x00F624E4, //:Raw Drang Hammers
	0x00F62548, //:Blessed Drang Hammers
	0x00F625AC, //:Hollow Drang Hammers
	0x00F646E0, //:Valorheart
	0x00F66DF0, //:Crow Quills
	0x00F69500, //:Ringed Knight Paired
	0x01312D00, //:Buckler
	0x01312D64, //:Heavy Buckler
	0x01312DC8, //:Sharp Buckler
	0x01312E2C, //:Refined Buckler
	0x01312E90, //:Simple Buckler
	0x01312EF4, //:Crystal Buckler
	0x01312F58, //:Fire Buckler
	0x01312FBC, //:Chaos Buckler
	0x01313020, //:Lightning Buckler
	0x01313084, //:Deep Buckler
	0x013130E8, //:Dark Buckler
	0x0131314C, //:Poison Buckler
	0x013131B0, //:Blood Buckler
	0x01313214, //:Raw Buckler
	0x01313278, //:Blessed Buckler
	0x013132DC, //:Hollow Buckler
	0x01315410, //:Small Leather Shield
	0x01315474, //:Heavy Small Leather Shield
	0x013154D8, //:Sharp Small Leather Shield
	0x0131553C, //:Refined Small Leather Shield
	0x013155A0, //:Simple Small Leather Shield
	0x01315604, //:Crystal Small Leather Shield
	0x01315668, //:Fire Small Leather Shield
	0x013156CC, //:Chaos Small Leather Shield
	0x01315730, //:Lightning Small Leather Shield
	0x01315794, //:Deep Small Leather Shield
	0x013157F8, //:Dark Small Leather Shield
	0x0131585C, //:Poison Small Leather Shield
	0x013158C0, //:Blood Small Leather Shield
	0x01315924, //:Raw Small Leather Shield
	0x01315988, //:Blessed Small Leather Shield
	0x013159EC, //:Hollow Small Leather Shield
	0x0131A230, //:Round Shield
	0x0131A294, //:Heavy Round Shield
	0x0131A2F8, //:Sharp Round Shield
	0x0131A35C, //:Refined Round Shield
	0x0131A3C0, //:Simple Round Shield
	0x0131A424, //:Crystal Round Shield
	0x0131A488, //:Fire Round Shield
	0x0131A4EC, //:Chaos Round Shield
	0x0131A550, //:Lightning Round Shield
	0x0131A5B4, //:Deep Round Shield
	0x0131A618, //:Dark Round Shield
	0x0131A67C, //:Poison Round Shield
	0x0131A6E0, //:Blood Round Shield
	0x0131A744, //:Raw Round Shield
	0x0131A7A8, //:Blessed Round Shield
	0x0131A80C, //:Hollow Round Shield
	0x0131C940, //:Large Leather Shield
	0x0131C9A4, //:Heavy Large Leather Shield
	0x0131CA08, //:Sharp Large Leather Shield
	0x0131CA6C, //:Refined Large Leather Shield
	0x0131CAD0, //:Simple Large Leather Shield
	0x0131CB34, //:Crystal Large Leather Shield
	0x0131CB98, //:Fire Large Leather Shield
	0x0131CBFC, //:Chaos Large Leather Shield
	0x0131CC60, //:Lightning Large Leather Shield
	0x0131CCC4, //:Deep Large Leather Shield
	0x0131CD28, //:Dark Large Leather Shield
	0x0131CD8C, //:Poison Large Leather Shield
	0x0131CDF0, //:Blood Large Leather Shield
	0x0131CE54, //:Raw Large Leather Shield
	0x0131CEB8, //:Blessed Large Leather Shield
	0x0131CF1C, //:Hollow Large Leather Shield
	0x01323E70, //:Hawkwood's Shield
	0x01323ED4, //:Hawkwood's Heavy Shield
	0x01323F38, //:Hawkwood's Sharp Shield
	0x01323F9C, //:Hawkwood's Refined Shield
	0x01324000, //:Hawkwood's Simple Shield
	0x01324064, //:Hawkwood's Crystal Shield
	0x013240C8, //:Hawkwood's Fire Shield
	0x0132412C, //:Hawkwood's Chaos Shield
	0x01324190, //:Hawkwood's Lightning Shield
	0x013241F4, //:Hawkwood's Deep Shield
	0x01324258, //:Hawkwood's Dark Shield
	0x013242BC, //:Hawkwood's Poison Shield
	0x01324320, //:Hawkwood's Blood Shield
	0x01324384, //:Hawkwood's Raw Shield
	0x013243E8, //:Hawkwood's Blessed Shield
	0x0132444C, //:Hawkwood's Hollow Shield
	0x01326580, //:Iron Round Shield
	0x013265E4, //:Heavy Iron Shield
	0x01326648, //:Sharp Iron Shield
	0x013266AC, //:Refined Iron Shield
	0x01326710, //:Simple Iron Shield
	0x01326774, //:Crystal Iron Shield
	0x013267D8, //:Fire Iron Shield
	0x0132683C, //:Chaos Iron Shield
	0x013268A0, //:Lightning Iron Shield
	0x01326904, //:Deep Iron Shield
	0x01326968, //:Dark Iron Shield
	0x013269CC, //:Poison Iron Shield
	0x01326A30, //:Blood Iron Shield
	0x01326A94, //:Raw Iron Shield
	0x01326AF8, //:Blessed Iron Shield
	0x01326B5C, //:Hollow Iron Shield
	0x0132DAB0, //:Wooden Shield
	0x0132DB14, //:Heavy Wooden Shield
	0x0132DB78, //:Sharp Wooden Shield
	0x0132DBDC, //:Refined Wooden Shield
	0x0132DC40, //:Simple Wooden Shield
	0x0132DCA4, //:Crystal Wooden Shield
	0x0132DD08, //:Fire Wooden Shield
	0x0132DD6C, //:Chaos Wooden Shield
	0x0132DDD0, //:Lightning Wooden Shield
	0x0132DE34, //:Deep Wooden Shield
	0x0132DE98, //:Dark Wooden Shield
	0x0132DEFC, //:Poison Wooden Shield
	0x0132DF60, //:Blood Wooden Shield
	0x0132DFC4, //:Raw Wooden Shield
	0x0132E028, //:Blessed Wooden Shield
	0x0132E08C, //:Hollow Wooden Shield
	0x013301C0, //:Kite Shield
	0x01330224, //:Heavy Kite Shield
	0x01330288, //:Sharp Kite Shield
	0x013302EC, //:Refined Kite Shield
	0x01330350, //:Simple Kite Shield
	0x013303B4, //:Crystal Kite Shield
	0x01330418, //:Fire Kite Shield
	0x0133047C, //:Chaos Kite Shield
	0x013304E0, //:Lightning Kite Shield
	0x01330544, //:Deep Kite Shield
	0x013305A8, //:Dark Kite Shield
	0x0133060C, //:Poison Kite Shield
	0x01330670, //:Blood Kite Shield
	0x013306D4, //:Raw Kite Shield
	0x01330738, //:Blessed Kite Shield
	0x0133079C, //:Hollow Kite Shield
	0x013328D0, //:Ghru Rotshield
	0x01332934, //:Heavy Ghru Rotshield
	0x01332998, //:Sharp Ghru Rotshield
	0x013329FC, //:Refined Ghru Rotshield
	0x01332A60, //:Simple Ghru Rotshield
	0x01332AC4, //:Crystal Ghru Rotshield
	0x01332B28, //:Fire Ghru Rotshield
	0x01332B8C, //:Chaos Ghru Rotshield
	0x01332BF0, //:Lightning Ghru Rotshield
	0x01332C54, //:Deep Ghru Rotshield
	0x01332CB8, //:Dark Ghru Rotshield
	0x01332D1C, //:Poison Ghru Rotshield
	0x01332D80, //:Blood Ghru Rotshield
	0x01332DE4, //:Raw Ghru Rotshield
	0x01332E48, //:Blessed Ghru Rotshield
	0x01332EAC, //:Hollow Ghru Rotshield
	0x013376F0, //:Havel's Greatshield
	0x01339E00, //:Target Shield
	0x01339E64, //:Heavy Target Shield
	0x01339EC8, //:Sharp Target Shield
	0x01339F2C, //:Refined Target Shield
	0x01339F90, //:Simple Target Shield
	0x01339FF4, //:Crystal Target Shield
	0x0133A058, //:Fire Target Shield
	0x0133A0BC, //:Chaos Target Shield
	0x0133A120, //:Lightning Target Shield
	0x0133A184, //:Deep Target Shield
	0x0133A1E8, //:Dark Target Shield
	0x0133A24C, //:Poison Target Shield
	0x0133A2B0, //:Blood Target Shield
	0x0133A314, //:Raw Target Shield
	0x0133A378, //:Blessed Target Shield
	0x0133A3DC, //:Hollow Target Shield
	0x0133C510, //:Elkhorn Round Shield
	0x0133C574, //:Heavy Elkhorn Shield
	0x0133C5D8, //:Sharp Elkhorn Shield
	0x0133C63C, //:Refined Elkhorn Shield
	0x0133C6A0, //:Simple Elkhorn Shield
	0x0133C704, //:Crystal Elkhorn Shield
	0x0133C768, //:Fire Elkhorn Shield
	0x0133C7CC, //:Chaos Elkhorn Shield
	0x0133C830, //:Lightning Elkhorn Shield
	0x0133C894, //:Deep Elkhorn Shield
	0x0133C8F8, //:Dark Elkhorn Shield
	0x0133C95C, //:Poison Elkhorn Shield
	0x0133C9C0, //:Blood Elkhorn Shield
	0x0133CA24, //:Raw Elkhorn Shield
	0x0133CA88, //:Blessed Elkhorn Shield
	0x0133CAEC, //:Hollow Elkhorn Shield
	0x0133EC20, //:Warrior's Round Shield
	0x0133EC84, //:Heavy Warrior's Shield
	0x0133ECE8, //:Sharp Warrior's Shield
	0x0133ED4C, //:Refined Warrior's Shield
	0x0133EDB0, //:Simple Warrior's Shield
	0x0133EE14, //:Crystal Warrior's Shield
	0x0133EE78, //:Fire Warrior's Shield
	0x0133EEDC, //:Chaos Warrior's Shield
	0x0133EF40, //:Lightning Warrior's Shield
	0x0133EFA4, //:Deep Warrior's Shield
	0x0133F008, //:Dark Warrior's Shield
	0x0133F06C, //:Poison Warrior's Shield
	0x0133F0D0, //:Blood Warrior's Shield
	0x0133F134, //:Raw Warrior's Shield
	0x0133F198, //:Blessed Warrior's Shield
	0x0133F1FC, //:Hollow Warrior's Shield
	0x01341330, //:Caduceus Round Shield
	0x01341394, //:Heavy Caduceus Shield
	0x013413F8, //:Sharp Caduceus Shield
	0x0134145C, //:Refined Caduceus Shield
	0x013414C0, //:Simple Caduceus Shield
	0x01341524, //:Crystal Caduceus Shield
	0x01341588, //:Fire Caduceus Shield
	0x013415EC, //:Chaos Caduceus Shield
	0x01341650, //:Lightning Caduceus Shield
	0x013416B4, //:Deep Caduceus Shield
	0x01341718, //:Dark Caduceus Shield
	0x0134177C, //:Poison Caduceus Shield
	0x013417E0, //:Blood Caduceus Shield
	0x01341844, //:Raw Caduceus Shield
	0x013418A8, //:Blessed Caduceus Shield
	0x0134190C, //:Hollow Caduceus Shield
	0x01343A40, //:Red and White Round Shield
	0x01343AA4, //:Heavy Red and White Shield
	0x01343B08, //:Sharp Red and White Shield
	0x01343B6C, //:Refined Red and White Shield
	0x01343BD0, //:Simple Red and White Shield
	0x01343C34, //:Crystal Red and White Shield
	0x01343C98, //:Fire Red and White Shield
	0x01343CFC, //:Chaos Red and White Shield
	0x01343D60, //:Lightning Red and White Shield
	0x01343DC4, //:Deep Red and White Shield
	0x01343E28, //:Dark Red and White Shield
	0x01343E8C, //:Poison Red and White Shield
	0x01343EF0, //:Blood Red and White Shield
	0x01343F54, //:Raw Red and White Shield
	0x01343FB8, //:Blessed Red and White Shield
	0x0134401C, //:Hollow Red and White Shield
	0x01346150, //:Plank Shield
	0x013461B4, //:Heavy Plank Shield
	0x01346218, //:Sharp Plank Shield
	0x0134627C, //:Refined Plank Shield
	0x013462E0, //:Simple Plank Shield
	0x01346344, //:Crystal Plank Shield
	0x013463A8, //:Fire Plank Shield
	0x0134640C, //:Chaos Plank Shield
	0x01346470, //:Lightning Plank Shield
	0x013464D4, //:Deep Plank Shield
	0x01346538, //:Dark Plank Shield
	0x0134659C, //:Poison Plank Shield
	0x01346600, //:Blood Plank Shield
	0x01346664, //:Raw Plank Shield
	0x013466C8, //:Blessed Plank Shield
	0x0134672C, //:Hollow Plank Shield
	0x01348860, //:Leather Shield
	0x013488C4, //:Heavy Leather Shield
	0x01348928, //:Sharp Leather Shield
	0x0134898C, //:Refined Leather Shield
	0x013489F0, //:Simple Leather Shield
	0x01348A54, //:Crystal Leather Shield
	0x01348AB8, //:Fire Leather Shield
	0x01348B1C, //:Chaos Leather Shield
	0x01348B80, //:Lightning Leather Shield
	0x01348BE4, //:Deep Leather Shield
	0x01348C48, //:Dark Leather Shield
	0x01348CAC, //:Poison Leather Shield
	0x01348D10, //:Blood Leather Shield
	0x01348D74, //:Raw Leather Shield
	0x01348DD8, //:Blessed Leather Shield
	0x01348E3C, //:Hollow Leather Shield
	0x0134AF70, //:Crimson Parma
	0x0134AFD4, //:Heavy Crimson Parma
	0x0134B038, //:Sharp Crimson Parma
	0x0134B09C, //:Refined Crimson Parma
	0x0134B100, //:Simple Crimson Parma
	0x0134B164, //:Crystal Crimson Parma
	0x0134B1C8, //:Fire Crimson Parma
	0x0134B22C, //:Chaos Crimson Parma
	0x0134B290, //:Lightning Crimson Parma
	0x0134B2F4, //:Deep Crimson Parma
	0x0134B358, //:Dark Crimson Parma
	0x0134B3BC, //:Poison Crimson Parma
	0x0134B420, //:Blood Crimson Parma
	0x0134B484, //:Raw Crimson Parma
	0x0134B4E8, //:Blessed Crimson Parma
	0x0134B54C, //:Hollow Crimson Parma
	0x0134D680, //:Eastern Iron Shield
	0x0134D6E4, //:Heavy Eastern Shield
	0x0134D748, //:Sharp Eastern Shield
	0x0134D7AC, //:Refined Eastern Shield
	0x0134D810, //:Simple Eastern Shield
	0x0134D874, //:Crystal Eastern Shield
	0x0134D8D8, //:Fire Eastern Shield
	0x0134D93C, //:Chaos Eastern Shield
	0x0134D9A0, //:Lightning Eastern Shield
	0x0134DA04, //:Deep Eastern Shield
	0x0134DA68, //:Dark Eastern Shield
	0x0134DACC, //:Poison Eastern Shield
	0x0134DB30, //:Blood Eastern Shield
	0x0134DB94, //:Raw Eastern Shield
	0x0134DBF8, //:Blessed Eastern Shield
	0x0134DC5C, //:Hollow Eastern Shield
	0x0134FD90, //:Llewellyn Shield
	0x0134FDF4, //:Heavy Llewellyn Shield
	0x0134FE58, //:Sharp Llewellyn Shield
	0x0134FEBC, //:Refined Llewellyn Shield
	0x0134FF20, //:Simple Llewellyn Shield
	0x0134FF84, //:Crystal Llewellyn Shield
	0x0134FFE8, //:Fire Llewellyn Shield
	0x0135004C, //:Chaos Llewellyn Shield
	0x013500B0, //:Lightning Llewellyn Shield
	0x01350114, //:Deep Llewellyn Shield
	0x01350178, //:Dark Llewellyn Shield
	0x013501DC, //:Poison Llewellyn Shield
	0x01350240, //:Blood Llewellyn Shield
	0x013502A4, //:Raw Llewellyn Shield
	0x01350308, //:Blessed Llewellyn Shield
	0x0135036C, //:Hollow Llewellyn Shield
	0x013524A0, //:Cleric's Parma
	0x01352504, //:Heavy Cleric's Parma
	0x01352568, //:Sharp Cleric's Parma
	0x013525CC, //:Refined Cleric's Parma
	0x01352630, //:Simpleton Cleric's Parma
	0x01352694, //:Crystal Cleric's Parma
	0x013526F8, //:Fire Cleric's Parma
	0x0135275C, //:Chaos Cleric's Parma
	0x013527C0, //:Lightning Cleric's Parma
	0x01352824, //:Deep Cleric's Parma
	0x01352888, //:Dark Cleric's Parma
	0x013528EC, //:Poison Cleric's Parma
	0x01352950, //:Blood Cleric's Parma
	0x013529B4, //:Raw Cleric's Parma
	0x01352A18, //:Blessed Cleric's Parma
	0x01352A7C, //:Hollow Cleric's Parma
	0x01354BB0, //:Golden Falcon Shield
	0x01354C14, //:Heavy Falcon Shield
	0x01354C78, //:Sharp Falcon Shield
	0x01354CDC, //:Refined Falcon Shield
	0x01354D40, //:Simple Falcon Shield
	0x01354DA4, //:Crystal Falcon Shield
	0x01354E08, //:Fire Falcon Shield
	0x01354E6C, //:Chaos Falcon Shield
	0x01354ED0, //:Lightning Falcon Shield
	0x01354F34, //:Deep Falcon Shield
	0x01354F98, //:Dark Falcon Shield
	0x01354FFC, //:Poison Falcon Shield
	0x01355060, //:Blood Falcon Shield
	0x013550C4, //:Raw Falcon Shield
	0x01355128, //:Blessed Falcon Shield
	0x0135518C, //:Hollow Falcon Shield
	0x013572C0, //:Sacred Bloom Shield
	0x013599D0, //:Ancient Dragon Greatshield
	0x01359A34, //:Heavy Ancient Dragon Great Shield
	0x01359A98, //:Sharp Ancient Dragon Great Shield
	0x01359AFC, //:Refined Ancient Dragon Great Shield
	0x01359B60, //:Simpleton Ancient Dragon Great Shield
	0x01359BC4, //:Crystal Ancient Dragon Great Shield
	0x01359C28, //:Fire Ancient Dragon Great Shield
	0x01359C8C, //:Chaos Ancient Dragon Great Shield
	0x01359CF0, //:Lightning Ancient Dragon Great Shield
	0x01359D54, //:Deep Ancient Dragon Great Shield
	0x01359DB8, //:Dark Ancient Dragon Great Shield
	0x01359E1C, //:Poison Ancient Dragon Great Shield
	0x01359E80, //:Blood Ancient Dragon Great Shield
	0x01359EE4, //:Raw Ancient Dragon Great Shield
	0x01359F48, //:Blessed Ancient Dragon Great Shield
	0x01359FAC, //:Hollow Ancient Dragon Great Shield
	0x0135C0E0, //:Followers Shield
	0x0135E7F0, //:Dragonhead Shield
	0x01409650, //:Lothric Knight Shield
	0x014096B4, //:Heavy Lothric Shield
	0x01409718, //:Sharp Lothric Shield
	0x0140977C, //:Refined Lothric Shield
	0x014097E0, //:Simple Lothric Shield
	0x01409844, //:Crystal Lothric Shield
	0x014098A8, //:Fire Lothric Shield
	0x0140990C, //:Chaos Lothric Shield
	0x01409970, //:Lightning Lothric Shield
	0x014099D4, //:Deep Lothric Shield
	0x01409A38, //:Dark Lothric Shield
	0x01409A9C, //:Poison Lothric Shield
	0x01409B00, //:Blood Lothric Shield
	0x01409B64, //:Raw Lothric Shield
	0x01409BC8, //:Blessed Lothric Shield
	0x01409C2C, //:Hollow Lothric Shield
	0x01410B80, //:Knight Shield
	0x01410BE4, //:Heavy Knight Shield
	0x01410C48, //:Sharp Knight Shield
	0x01410CAC, //:Refined Knight Shield
	0x01410D10, //:Simple Knight Shield
	0x01410D74, //:Crystal Knight Shield
	0x01410DD8, //:Fire Knight Shield
	0x01410E3C, //:Chaos Knight Shield
	0x01410EA0, //:Lightning Knight Shield
	0x01410F04, //:Deep Knight Shield
	0x01410F68, //:Dark Knight Shield
	0x01410FCC, //:Poison Knight Shield
	0x01411030, //:Blood Knight Shield
	0x01411094, //:Raw Knight Shield
	0x014110F8, //:Blessed Knight Shield
	0x0141115C, //:Hollow Knight Shield
	0x014159A0, //:Pontiff Knight Shield
	0x01415A04, //:Heavy Pontiff Knight Shield
	0x01415A68, //:Sharp Pontiff Knight Shield
	0x01415ACC, //:Refined Pontiff Knight Shield
	0x01415B30, //:Simpleton Pontiff Knight Shield
	0x01415B94, //:Crystal Pontiff Knight Shield
	0x01415BF8, //:Fire Pontiff Knight Shield
	0x01415C5C, //:Chaos Pontiff Knight Shield
	0x01415CC0, //:Lightning Pontiff Knight Shield
	0x01415D24, //:Deep Pontiff Knight Shield
	0x01415D88, //:Dark Pontiff Knight Shield
	0x01415DEC, //:Poison Pontiff Knight Shield
	0x01415E50, //:Blood Pontiff Knight Shield
	0x01415EB4, //:Raw Pontiff Knight Shield
	0x01415F18, //:Blessed Pontiff Knight Shield
	0x01415F7C, //:Hollow Pontiff Knight Shield
	0x014180B0, //:Carthus Shield
	0x01418114, //:Heavy Carthus Shield
	0x01418178, //:Sharp Carthus Shield
	0x014181DC, //:Refined Carthus Shield
	0x01418240, //:Simple Carthus Shield
	0x014182A4, //:Crystal Carthus Shield
	0x01418308, //:Fire Carthus Shield
	0x0141836C, //:Chaos Carthus Shield
	0x014183D0, //:Lightning Carthus Shield
	0x01418434, //:Deep Carthus Shield
	0x01418498, //:Dark Carthus Shield
	0x014184FC, //:Poison Carthus Shield
	0x01418560, //:Blood Carthus Shield
	0x014185C4, //:Raw Carthus Shield
	0x01418628, //:Blessed Carthus Shield
	0x0141868C, //:Hollow Carthus Shield
	0x0141F5E0, //:Black Knight Shield
	0x0141F644, //:Heavy Black Knight Shield
	0x0141F6A8, //:Sharp Black Knight Shield
	0x0141F70C, //:Refined Black Knight Shield
	0x0141F770, //:Simple Black Knight Shield
	0x0141F7D4, //:Crystal Black Knight Shield
	0x0141F838, //:Fire Black Knight Shield
	0x0141F89C, //:Chaos Black Knight Shield
	0x0141F900, //:Lightning Black Knight Shield
	0x0141F964, //:Deep Black Knight Shield
	0x0141F9C8, //:Dark Black Knight Shield
	0x0141FA2C, //:Poison Black Knight Shield
	0x0141FA90, //:Blood Black Knight Shield
	0x0141FAF4, //:Raw Black Knight Shield
	0x0141FB58, //:Blessed Black Knight Shield
	0x0141FBBC, //:Hollow Black Knight Shield
	0x01421CF0, //:Prince's Shield
	0x01424400, //:Silver Knight Shield
	0x01424464, //:Heavy Silver Knight Shield
	0x014244C8, //:Sharp Silver Knight Shield
	0x0142452C, //:Refined Silver Knight Shield
	0x01424590, //:Simple Silver Knight Shield
	0x014245F4, //:Crystal Silver Knight Shield
	0x01424658, //:Fire Silver Knight Shield
	0x014246BC, //:Chaos Silver Knight Shield
	0x01424720, //:Lightning Silver Knight Shield
	0x01424784, //:Deep Silver Knight Shield
	0x014247E8, //:Dark Silver Knight Shield
	0x0142484C, //:Poison Silver Knight Shield
	0x014248B0, //:Blood Silver Knight Shield
	0x01424914, //:Raw Silver Knight Shield
	0x01424978, //:Blessed Silver Knight Shield
	0x014249DC, //:Hollow Silver Knight Shield
	0x01426B10, //:Spiked Shield
	0x01426B74, //:Heavy Spiked Shield
	0x01426BD8, //:Sharp Spiked Shield
	0x01426C3C, //:Refined Spiked Shield
	0x01426CA0, //:Simple Spiked Shield
	0x01426D04, //:Crystal Spiked Shield
	0x01426D68, //:Fire Spiked Shield
	0x01426DCC, //:Chaos Spiked Shield
	0x01426E30, //:Lightning Spiked Shield
	0x01426E94, //:Deep Spiked Shield
	0x01426EF8, //:Dark Spiked Shield
	0x01426F5C, //:Poison Spiked Shield
	0x01426FC0, //:Blood Spiked Shield
	0x01427024, //:Raw Spiked Shield
	0x01427088, //:Blessed Spiked Shield
	0x014270EC, //:Hollow Spiked Shield
	0x01429220, //:Pierce Shield
	0x01429284, //:Heavy Pierce Shield
	0x014292E8, //:Sharp Pierce Shield
	0x0142934C, //:Refined Pierce Shield
	0x014293B0, //:Simple Pierce Shield
	0x01429414, //:Crystal Pierce Shield
	0x01429478, //:Fire Pierce Shield
	0x014294DC, //:Chaos Pierce Shield
	0x01429540, //:Lightning Pierce Shield
	0x014295A4, //:Deep Pierce Shield
	0x01429608, //:Dark Pierce Shield
	0x0142966C, //:Poison Pierce Shield
	0x014296D0, //:Blood Pierce Shield
	0x01429734, //:Raw Pierce Shield
	0x01429798, //:Blessed Pierce Shield
	0x014297FC, //:Hollow Pierce Shield
	0x0142B930, //:East-West Shield
	0x0142B994, //:Heavy East-West Shield
	0x0142B9F8, //:Sharp East-West Shield
	0x0142BA5C, //:Refined East-West Shield
	0x0142BAC0, //:Simple East-West Shield
	0x0142BB24, //:Crystal East-West Shield
	0x0142BB88, //:Fire East-West Shield
	0x0142BBEC, //:Chaos East-West Shield
	0x0142BC50, //:Lightning East-West Shield
	0x0142BCB4, //:Deep East-West Shield
	0x0142BD18, //:Dark East-West Shield
	0x0142BD7C, //:Poison East-West Shield
	0x0142BDE0, //:Blood East-West Shield
	0x0142BE44, //:Raw East-West Shield
	0x0142BEA8, //:Blessed East-West Shield
	0x0142BF0C, //:Hollow East-West Shield
	0x0142E040, //:Sunlight Shield
	0x0142E0A4, //:Heavy Sunlight Shield
	0x0142E108, //:Sharp Sunlight Shield
	0x0142E16C, //:Refined Sunlight Shield
	0x0142E1D0, //:Simple Sunlight Shield
	0x0142E234, //:Crystal Sunlight Shield
	0x0142E298, //:Fire Sunlight Shield
	0x0142E2FC, //:Chaos Sunlight Shield
	0x0142E360, //:Lightning Sunlight Shield
	0x0142E3C4, //:Deep Sunlight Shield
	0x0142E428, //:Dark Sunlight Shield
	0x0142E48C, //:Poison Sunlight Shield
	0x0142E4F0, //:Blood Sunlight Shield
	0x0142E554, //:Raw Sunlight Shield
	0x0142E5B8, //:Blessed Sunlight Shield
	0x0142E61C, //:Hollow Sunlight Shield
	0x01430750, //:Crest Shield
	0x014307B4, //:Heavy Crest Shield
	0x01430818, //:Sharp Crest Shield
	0x0143087C, //:Refined Crest Shield
	0x014308E0, //:Simpleton Crest Shield
	0x01430944, //:Crystal Crest Shield
	0x014309A8, //:Fire Crest Shield
	0x01430A0C, //:Chaos Crest Shield
	0x01430A70, //:Lightning Crest Shield
	0x01430AD4, //:Deep Crest Shield
	0x01430B38, //:Dark Crest Shield
	0x01430B9C, //:Poison Crest Shield
	0x01430C00, //:Blood Crest Shield
	0x01430C64, //:Raw Crest Shield
	0x01430CC8, //:Blessed Crest Shield
	0x01430D2C, //:Hollow Crest Shield
	0x01432E60, //:Dragon Crest Shield
	0x01432EC4, //:Heavy Dragon Crest Shield
	0x01432F28, //:Sharp Dragon Crest Shield
	0x01432F8C, //:Refined Dragon Crest Shield
	0x01432FF0, //:Simpleton Dragon Crest Shield
	0x01433054, //:Crystal Dragon Crest Shield
	0x014330B8, //:Fire Dragon Crest Shield
	0x0143311C, //:Chaos Dragon Crest Shield
	0x01433180, //:Lightning Dragon Crest Shield
	0x014331E4, //:Deep Dragon Crest Shield
	0x01433248, //:Dark Dragon Crest Shield
	0x014332AC, //:Poison Dragon Crest Shield
	0x01433310, //:Blood Dragon Crest Shield
	0x01433374, //:Raw Dragon Crest Shield
	0x014333D8, //:Blessed Dragon Crest Shield
	0x0143343C, //:Hollow Dragon Crest Shield
	0x01435570, //:Spider Shield
	0x014355D4, //:Heavy Spider Shield
	0x01435638, //:Sharp Spider Shield
	0x0143569C, //:Refined Spider Shield
	0x01435700, //:Simple Spider Shield
	0x01435764, //:Crystal Spider Shield
	0x014357C8, //:Fire Spider Shield
	0x0143582C, //:Chaos Spider Shield
	0x01435890, //:Lightning Spider Shield
	0x014358F4, //:Deep Spider Shield
	0x01435958, //:Dark Spider Shield
	0x014359BC, //:Poison Spider Shield
	0x01435A20, //:Blood Spider Shield
	0x01435A84, //:Raw Spider Shield
	0x01435AE8, //:Blessed Spider Shield
	0x01435B4C, //:Hollow Spider Shield
	0x01437C80, //:Grass Crest Shield
	0x01437CE4, //:Heavy Grass Crest Shield
	0x01437D48, //:Sharp Grass Crest Shield
	0x01437DAC, //:Refined Grass Crest Shield
	0x01437E10, //:Simpleton Grass Crest Shield
	0x01437E74, //:Crystal Grass Crest Shield
	0x01437ED8, //:Fire Grass Crest Shield
	0x01437F3C, //:Chaos Grass Crest Shield
	0x01437FA0, //:Lightning Grass Crest Shield
	0x01438004, //:Deep Grass Crest Shield
	0x01438068, //:Dark Grass Crest Shield
	0x014380CC, //:Poison Grass Crest Shield
	0x01438130, //:Blood Grass Crest Shield
	0x01438194, //:Raw Grass Crest Shield
	0x014381F8, //:Blessed Grass Crest Shield
	0x0143825C, //:Hollow Grass Crest Shield
	0x0143A390, //:Sunset Shield
	0x0143A3F4, //:Heavy Sunset Shield
	0x0143A458, //:Sharp Sunset Shield
	0x0143A4BC, //:Refined Sunset Shield
	0x0143A520, //:Simple Sunset Shield
	0x0143A584, //:Crystal Sunset Shield
	0x0143A5E8, //:Fire Sunset Shield
	0x0143A64C, //:Chaos Sunset Shield
	0x0143A6B0, //:Lightning Sunset Shield
	0x0143A714, //:Deep Sunset Shield
	0x0143A778, //:Dark Sunset Shield
	0x0143A7DC, //:Poison Sunset Shield
	0x0143A840, //:Blood Sunset Shield
	0x0143A8A4, //:Raw Sunset Shield
	0x0143A908, //:Blessed Sunset Shield
	0x0143A96C, //:Hollow Sunset Shield
	0x0143CAA0, //:Golden Wing Crest Shield
	0x0143CB04, //:Heavy Golden Wing Crest Shield
	0x0143CB68, //:Sharp Golden Wing Crest Shield
	0x0143CBCC, //:Refined Golden Wing Crest Shield
	0x0143CC30, //:Simpleton Golden Wing Crest Shield
	0x0143CC94, //:Crystal Golden Wing Crest Shield
	0x0143CCF8, //:Fire Golden Wing Crest Shield
	0x0143CD5C, //:Chaos Golden Wing Crest Shield
	0x0143CDC0, //:Lightning Golden Wing Crest Shield
	0x0143CE24, //:Deep Golden Wing Crest Shield
	0x0143CE88, //:Dark Golden Wing Crest Shield
	0x0143CEEC, //:Poison Golden Wing Crest Shield
	0x0143CF50, //:Blood Golden Wing Crest Shield
	0x0143CFB4, //:Raw Golden Wing Crest Shield
	0x0143D018, //:Blessed Golden Wing Crest Shield
	0x0143D07C, //:Hollow Golden Wing Crest Shield
	0x0143F1B0, //:Blue Wooden Shield
	0x0143F214, //:Heavy Blue Shield
	0x0143F278, //:Sharp Blue Shield
	0x0143F2DC, //:Refined Blue Shield
	0x0143F340, //:Simple Blue Shield
	0x0143F3A4, //:Crystal Blue Shield
	0x0143F408, //:Fire Blue Shield
	0x0143F46C, //:Chaos Blue Shield
	0x0143F4D0, //:Lightning Blue Shield
	0x0143F534, //:Deep Blue Shield
	0x0143F598, //:Dark Blue Shield
	0x0143F5FC, //:Poison Blue Shield
	0x0143F660, //:Blood Blue Shield
	0x0143F6C4, //:Raw Blue Shield
	0x0143F728, //:Blessed Blue Shield
	0x0143F78C, //:Hollow Blue Shield
	0x014418C0, //:Silver Eagle Kite Shield
	0x01441924, //:Heavy Eagle Kite Shield
	0x01441988, //:Sharp Eagle Kite Shield
	0x014419EC, //:Refined Eagle Kite Shield
	0x01441A50, //:Simple Eagle Kite Shield
	0x01441AB4, //:Crystal Eagle Kite Shield
	0x01441B18, //:Fire Eagle Kite Shield
	0x01441B7C, //:Chaos Eagle Kite Shield
	0x01441BE0, //:Lightning Eagle Kite Shield
	0x01441C44, //:Deep Eagle Kite Shield
	0x01441CA8, //:Dark Eagle Kite Shield
	0x01441D0C, //:Poison Eagle Kite Shield
	0x01441D70, //:Blood Eagle Kite Shield
	0x01441DD4, //:Raw Eagle Kite Shield
	0x01441E38, //:Blessed Eagle Kite Shield
	0x01441E9C, //:Hollow Eagle Kite Shield
	0x01443FD0, //:Stone Parma
	0x01444034, //:Heavy Stone Parma
	0x01444098, //:Sharp Stone Parma
	0x014440FC, //:Refined Stone Parma
	0x01444160, //:Simple Stone Parma
	0x014441C4, //:Crystal Stone Parma
	0x01444228, //:Fire Stone Parma
	0x0144428C, //:Chaos Stone Parma
	0x014442F0, //:Lightning Stone Parma
	0x01444354, //:Deep Stone Parma
	0x014443B8, //:Dark Stone Parma
	0x0144441C, //:Poison Stone Parma
	0x01444480, //:Blood Stone Parma
	0x014444E4, //:Raw Stone Parma
	0x01444548, //:Blessed Stone Parma
	0x014445AC, //:Hollow Stone Parma
	0x014466E0, //:Spirit Tree Crest Shield
	0x01446744, //:Heavy Sacred Wood Crest Shield
	0x014467A8, //:Sharp Sacred Wood Crest Shield
	0x0144680C, //:Refined Sacred Wood Crest Shield
	0x01446870, //:Simpleton Sacred Wood Crest Shield
	0x014468D4, //:Crystal Sacred Wood Crest Shield
	0x01446938, //:Fire Sacred Wood Crest Shield
	0x0144699C, //:Chaos Sacred Wood Crest Shield
	0x01446A00, //:Lightning Sacred Wood Crest Shield
	0x01446A64, //:Deep Sacred Wood Crest Shield
	0x01446AC8, //:Dark Sacred Wood Crest Shield
	0x01446B2C, //:Poison Sacred Wood Crest Shield
	0x01446B90, //:Blood Sacred Wood Crest Shield
	0x01446BF4, //:Raw Sacred Wood Crest Shield
	0x01446C58, //:Blessed Sacred Wood Crest Shield
	0x01446CBC, //:Hollow Sacred Wood Crest Shield
	0x01448DF0, //:Porcine Shield
	0x01448E54, //:Heavy Porcine Shield
	0x01448EB8, //:Sharp Porcine Shield
	0x01448F1C, //:Refined Porcine Shield
	0x01448F80, //:Simple Porcine Shield
	0x01448FE4, //:Crystal Porcine Shield
	0x01449048, //:Fire Porcine Shield
	0x014490AC, //:Chaos Porcine Shield
	0x01449110, //:Lightning Porcine Shield
	0x01449174, //:Deep Porcine Shield
	0x014491D8, //:Dark Porcine Shield
	0x0144923C, //:Poison Porcine Shield
	0x014492A0, //:Blood Porcine Shield
	0x01449304, //:Raw Porcine Shield
	0x01449368, //:Blessed Porcine Shield
	0x014493CC, //:Hollow Porcine Shield
	0x0144B500, //:Shield of Want
	0x0144DC10, //:Wargod Wooden Shield
	0x0144DC74, //:Heavy Wargod Shield
	0x0144DCD8, //:Sharp Wargod Shield
	0x0144DD3C, //:Refined Wargod Shield
	0x0144DDA0, //:Simple Wargod Shield
	0x0144DE04, //:Crystal Wargod Shield
	0x0144DE68, //:Fire Wargod Shield
	0x0144DECC, //:Chaos Wargod Shield
	0x0144DF30, //:Lightning Wargod Shield
	0x0144DF94, //:Deep Wargod Shield
	0x0144DFF8, //:Dark Wargod Shield
	0x0144E05C, //:Poison Wargod Shield
	0x0144E0C0, //:Blood Wargod Shield
	0x0144E124, //:Raw Wargod Shield
	0x0144E188, //:Blessed Wargod Shield
	0x0144E1EC, //:Hollow Wargod Shield
	0x01450320, //:Ethereal Oak Shield
	0x01452A30, //:Dragonhead Greatshield
	0x014FD890, //:Lothric Knight Greatshield
	0x014FD8F4, //:Heavy Lothric Greatshield
	0x014FD958, //:Sharp Lothric Greatshield
	0x014FD9BC, //:Refined Lothric Greatshield
	0x014FDA20, //:Simple Lothric Greatshield
	0x014FDA84, //:Crystal Lothric Greatshield
	0x014FDAE8, //:Fire Lothric Greatshield
	0x014FDB4C, //:Chaos Lothric Greatshield
	0x014FDBB0, //:Lightning Lothric Greatshield
	0x014FDC14, //:Deep Lothric Greatshield
	0x014FDC78, //:Dark Lothric Greatshield
	0x014FDCDC, //:Poison Lothric Greatshield
	0x014FDD40, //:Blood Lothric Greatshield
	0x014FDDA4, //:Raw Lothric Greatshield
	0x014FDE08, //:Blessed Lothric Greatshield
	0x014FDE6C, //:Hollow Lothric Greatshield
	0x014FFFA0, //:Cathedral Knight Greatshield
	0x01500004, //:Heavy Cathedral Greatshield
	0x01500068, //:Sharp Cathedral Greatshield
	0x015000CC, //:Refined Cathedral Greatshield
	0x01500130, //:Simple Cathedral Greatshield
	0x01500194, //:Crystal Cathedral Greatshield
	0x015001F8, //:Fire Cathedral Greatshield
	0x0150025C, //:Chaos Cathedral Greatshield
	0x015002C0, //:Lightning Cathedral Greatshield
	0x01500324, //:Deep Cathedral Greatshield
	0x01500388, //:Dark Cathedral Greatshield
	0x015003EC, //:Poison Cathedral Greatshield
	0x01500450, //:Blood Cathedral Greatshield
	0x015004B4, //:Raw Cathedral Greatshield
	0x01500518, //:Blessed Cathedral Greatshield
	0x0150057C, //:Hollow Cathedral Greatshield
	0x01504DC0, //:Dragonslayer Greatshield
	0x015074D0, //:Moaning Shield
	0x01509BE0, //:Ancient Dragon Great Shield
	0x0150C2F0, //:Yhorm's Greatshield
	0x0150EA00, //:Black Iron Greatshield
	0x0150EA64, //:Heavy Black Iron Greatshield
	0x0150EAC8, //:Sharp Black Iron Greatshield
	0x0150EB2C, //:Refined Black Iron Greatshield
	0x0150EB90, //:Simple Black Iron Greatshield
	0x0150EBF4, //:Crystal Black Iron Greatshield
	0x0150EC58, //:Fire Black Iron Greatshield
	0x0150ECBC, //:Chaos Black Iron Greatshield
	0x0150ED20, //:Lightning Black Iron Greatshield
	0x0150ED84, //:Deep Black Iron Greatshield
	0x0150EDE8, //:Dark Black Iron Greatshield
	0x0150EE4C, //:Poison Black Iron Greatshield
	0x0150EEB0, //:Blood Black Iron Greatshield
	0x0150EF14, //:Raw Black Iron Greatshield
	0x0150EF78, //:Blessed Black Iron Greatshield
	0x0150EFDC, //:Hollow Black Iron Greatshield
	0x01511110, //:Wolf Knight's Greatshield
	0x01513820, //:Twin Dragon Greatshield
	0x01513884, //:Heavy Twin Dragon Greatshield
	0x015138E8, //:Sharp Twin Dragon Greatshield
	0x0151394C, //:Refined Twin Dragon Greatshield
	0x015139B0, //:Simple Twin Dragon Greatshield
	0x01513A14, //:Crystal Twin Dragon Greatshield
	0x01513A78, //:Fire Twin Dragon Greatshield
	0x01513ADC, //:Chaos Twin Dragon Greatshield
	0x01513B40, //:Lightning Twin Dragon Greatshield
	0x01513BA4, //:Deep Twin Dragon Greatshield
	0x01513C08, //:Dark Twin Dragon Greatshield
	0x01513C6C, //:Poison Twin Dragon Greatshield
	0x01513CD0, //:Blood Twin Dragon Greatshield
	0x01513D34, //:Raw Twin Dragon Greatshield
	0x01513D98, //:Blessed Twin Dragon Greatshield
	0x01513DFC, //:Hollow Twin Dragon Greatshield
	0x01515F30, //:Greatshield of Glory
	0x01515F94, //:Heavy Greatshield of Glory
	0x01515FF8, //:Sharp Greatshield of Glory
	0x0151605C, //:Refined Greatshield of Glory
	0x015160C0, //:Simple Greatshield of Glory
	0x01516124, //:Crystal Greatshield of Glory
	0x01516188, //:Fire Greatshield of Glory
	0x015161EC, //:Chaos Greatshield of Glory
	0x01516250, //:Lightning Greatshield of Glory
	0x015162B4, //:Deep Greatshield of Glory
	0x01516318, //:Dark Greatshield of Glory
	0x0151637C, //:Poison Greatshield of Glory
	0x015163E0, //:Blood Greatshield of Glory
	0x01516444, //:Raw Greatshield of Glory
	0x015164A8, //:Blessed Greatshield of Glory
	0x0151650C, //:Hollow Greatshield of Glory
	0x01518640, //:Curse Ward Greatshield
	0x015186A4, //:Heavy Curse Ward Greatshield
	0x01518708, //:Sharp Curse Ward Greatshield
	0x0151876C, //:Refined Curse Ward Greatshield
	0x015187D0, //:Simple Curse Ward Greatshield
	0x01518834, //:Crystal Curse Ward Greatshield
	0x01518898, //:Fire Curse Ward Greatshield
	0x015188FC, //:Chaos Curse Ward Greatshield
	0x01518960, //:Lightning Curse Ward Greatshield
	0x015189C4, //:Deep Curse Ward Greatshield
	0x01518A28, //:Dark Curse Ward Greatshield
	0x01518A8C, //:Poison Curse Ward Greatshield
	0x01518AF0, //:Blood Curse Ward Greatshield
	0x01518B54, //:Raw Curse Ward Greatshield
	0x01518BB8, //:Blessed Curse Ward Greatshield
	0x01518C1C, //:Hollow Curse Ward Greatshield
	0x0151AD50, //:Bonewheel Shield
	0x0151ADB4, //:Heavy Bonewheel Shield
	0x0151AE18, //:Sharp Bonewheel Shield
	0x0151AE7C, //:Refined Bonewheel Shield
	0x0151AEE0, //:Simple Bonewheel Shield
	0x0151AF44, //:Crystal Bonewheel Shield
	0x0151AFA8, //:Fire Bonewheel Shield
	0x0151B00C, //:Chaos Bonewheel Shield
	0x0151B070, //:Lightning Bonewheel Shield
	0x0151B0D4, //:Deep Bonewheel Shield
	0x0151B138, //:Dark Bonewheel Shield
	0x0151B19C, //:Poison Bonewheel Shield
	0x0151B200, //:Blood Bonewheel Shield
	0x0151B264, //:Raw Bonewheel Shield
	0x0151B2C8, //:Blessed Bonewheel Shield
	0x0151B32C, //:Hollow Bonewheel Shield
	0x0151D460, //:Stone Greatshield
	0x0151D4C4, //:Heavy Stone Greatshield
	0x0151D528, //:Sharp Stone Greatshield
	0x0151D58C, //:Refined Stone Greatshield
	0x0151D5F0, //:Simple Stone Greatshield
	0x0151D654, //:Crystal Stone Greatshield
	0x0151D6B8, //:Fire Stone Greatshield
	0x0151D71C, //:Chaos Stone Greatshield
	0x0151D780, //:Lightning Stone Greatshield
	0x0151D7E4, //:Deep Stone Greatshield
	0x0151D848, //:Dark Stone Greatshield
	0x0151D8AC, //:Poison Stone Greatshield
	0x0151D910, //:Blood Stone Greatshield
	0x0151D974, //:Raw Stone Greatshield
	0x0151D9D8, //:Blessed Stone Greatshield
	0x0151DA3C, //:Hollow Stone Greatshield
	0x015EF3C0, //:Torch
	0x015F1AD0, //:Follower Torch
};

DWORD validArmour[399] = 
{
	0x100DBBA0, //Head
	0x100DBF88, //Body
	0x100DC370, //Arms
	0x100DC758, //Legs
	0x1121EAC0, //:Fallen Knight Helm
	0x1121EEA8, //:Fallen Knight Armor
	0x1121F290, //:Fallen Knight Gauntlets
	0x1121F678, //:Fallen Knight Trousers
	0x11298BE0, //:Knight Helm
	0x11298FC8, //:Knight Armor
	0x112993B0, //:Knight Gauntlets
	0x11299798, //:Knight Leggings
	0x11312D00, //:Vilhelm's Helm
	0x113130E8, //:Vilhelm's Armor
	0x113134D0, //:Vilhelm's Gauntlets
	0x113138B8, //:Vilhelm's Leggings
	0x11406F40, //:Firelink Helm
	0x11407328, //:Firelink Armor
	0x11407710, //:Firelink Gauntlets
	0x11407AF8, //:Firelink Leggings
	0x11481060, //:Sellsword Helm
	0x11481448, //:Sellsword Armor
	0x11481830, //:Sellsword Gauntlet
	0x11481C18, //:Sellsword Trousers
	0x114FB180, //:Herald Helm
	0x114FB568, //:Herald Armor
	0x114FB950, //:Herald Gloves
	0x114FBD38, //:Herald Trousers
	0x115752A0, //:Sunless Veil
	0x11575688, //:Sunless Armor
	0x11575A70, //:Sunless Gauntlets
	0x11575E58, //:Sunless Leggings
	0x115EF3C0, //:Black Hand Hat
	0x115EF7A8, //:Black Hand Armor
	0x115EFB90, //:Assassin Gloves
	0x115EFF78, //:Assassin Trousers
	0x11607A60, //:Assassin Hood
	0x11607E48, //:Assassin Armor
	0x116694E0, //:Xanthous Crown
	0x116698C8, //:Xanthous Overcoat
	0x11669CB0, //:Xanthous Gloves
	0x1166A098, //:Xanthous Trousers
	0x116E3600, //:Northern Helm
	0x116E39E8, //:Northern Armor
	0x116E3DD0, //:Northern Gloves
	0x116E41B8, //:Northern Trousers
	0x1175D720, //:Morne's Helm
	0x1175DB08, //:Morne's Armor
	0x1175DEF0, //:Morne's Gauntlets
	0x1175E2D8, //:Morne's Leggings
	0x117D7840, //:Silver Mask
	0x117D7C28, //:Leonhard's Garb
	0x117D8010, //:Leonhard's Gauntlets
	0x117D83F8, //:Leonhard's Trousers
	0x11851960, //:Sneering Mask
	0x11851D48, //:Pale Shade Robe
	0x11852130, //:Pale Shade Gloves
	0x11852518, //:Pale Shade Trousers
	0x118CBA80, //:Sunset Helm
	0x118CBE68, //:Sunset Armor
	0x118CC250, //:Sunset Gauntlets
	0x118CC638, //:Sunset Leggings
	0x11945BA0, //:Old Sage's Blindfold
	0x11945F88, //:Cornyx's Garb
	0x11946370, //:Cornyx's Wrap
	0x11946758, //:Cornyx's Skirt
	0x119BFCC0, //:Executioner Helm
	0x119C00A8, //:Executioner Armor
	0x119C0490, //:Executioner Gauntlets
	0x119C0878, //:Executioner Leggings
	0x11A39DE0, //:Billed Mask
	0x11A3A1C8, //:Black Dress
	0x11A3A5B0, //:Black Gauntlets
	0x11A3A998, //:Black Leggings
	0x11AB3F00, //:Pyromancer Crown
	0x11AB42E8, //:Pyromancer Garb
	0x11AB46D0, //:Pyromancer Wrap
	0x11AB4AB8, //:Pyromancer Trousers
	0x11B2E408, //:Antiquated Plain Garb
	0x11B2E7F0, //:Violet Wrappings
	0x11B2EBD8, //:Loincloth
	0x11BA8140, //:Court Sorcerer Hood
	0x11BA8528, //:Court Sorcerer Robe
	0x11BA8910, //:Court Sorcerer Gloves
	0x11BA8CF8, //:Court Sorcerer Trousers
	0x11C22260, //:Shira's Crown
	0x11C22648, //:Shira's Armor
	0x11C22A30, //:Shira's Gloves
	0x11C22E18, //:Shira's Trousers
	0x11C9C380, //:Sorcerer Hood
	0x11C9C768, //:Sorcerer Robe
	0x11C9CB50, //:Sorcerer Gloves
	0x11C9CF38, //:Sorcerer Trousers
	0x11CB4E08, //:Clandestine Coat
	0x11D905C0, //:Cleric Hat
	0x11D909A8, //:Cleric Blue Robe
	0x11D90D90, //:Cleric Gloves
	0x11D91178, //:Cleric Trousers
	0x11DA9048, //:Dingy Maiden's Overcoat
	0x11E84800, //:Lapp's Helm
	0x11E84BE8, //:Lapp's Armor
	0x11E84FD0, //:Lapp's Gauntlets
	0x11E853B8, //:Lapp's Leggings
	0x11F78A40, //:Grotto Hat
	0x11F78E28, //:Grotto Robe
	0x11F79210, //:Grotto Wrap
	0x11F795F8, //:Grotto Trousers
	0x12625A00, //:Steel Soldier Helm
	0x12625DE8, //:Deserter Armor
	0x126261D0, //:Soldier's Gauntlets
	0x126265B8, //:Deserter Trousers
	0x1263E0A0, //:Soldier's Hood
	0x12656740, //:Thief Mask
	0x129020C0, //:Sage's Big Hat
	0x129024A8, //:Elder's Robe
	0x129F6300, //:Aristocrat's Mask
	0x129F66E8, //:Jailer Robe
	0x129F6AD0, //:Jailer Gloves
	0x129F6EB8, //:Jailer Trousers
	0x12A70420, //:Saint's Veil
	0x12A70808, //:Saint's Dress
	0x12AEA540, //:Footman's Hood
	0x12AEA928, //:Footman's Overcoat
	0x12AEAD10, //:Footman's Bracelets
	0x12AEB0F8, //:Footman's Trousers
	0x12BDE780, //:Grave Warden Hood
	0x12BDEB68, //:Grave Warden Robe
	0x12BDEF50, //:Grave Warden Wrap
	0x12BDF338, //:Grave Warden Skirt
	0x12CD29C0, //:Worker Hat
	0x12CD2DA8, //:Worker Garb
	0x12CD3190, //:Worker Gloves
	0x12CD3578, //:Worker Trousers
	0x12D4CAE0, //:Thrall Hood
	0x12DC6C00, //:Evangelist Hat
	0x12DC6FE8, //:Evangelist Robe
	0x12DC73D0, //:Evangelist Gloves
	0x12DC77B8, //:Evangelist Trousers
	0x12E40D20, //:Scholar's Shed Skin
	0x12E41108, //:Scholar's Robe
	0x12EBAE40, //:Winged Knight Helm
	0x12EBB228, //:Winged Knight Armor
	0x12EBB610, //:Winged Knight Gauntlets
	0x12EBB9F8, //:Winged Knight Leggings
	0x130291A0, //:Cathedral Knight Helm
	0x13029588, //:Cathedral Knight Armor
	0x13029970, //:Cathedral Knight Gauntlets
	0x13029D58, //:Cathedral Knight Leggings
	0x13197500, //:Lothric Knight Helm
	0x131978E8, //:Lothric Knight Armor
	0x13197CD0, //:Lothric Knight Gauntlets
	0x131980B8, //:Lothric Knight Leggings
	0x1328B740, //:Outrider Knight Helm
	0x1328BB28, //:Outrider Knight Armor
	0x1328BF10, //:Outrider Knight Gauntlets
	0x1328C2F8, //:Outrider Knight Leggings
	0x1337F980, //:Black Knight Helm
	0x1337FD68, //:Black Knight Armor
	0x13380150, //:Black Knight Gauntlets
	0x13380538, //:Black Knight Leggings
	0x133F9AA0, //:Dark Mask
	0x133F9E88, //:Dark Armor
	0x133FA270, //:Dark Gauntlets
	0x133FA658, //:Dark Leggings
	0x13473BC0, //:Exile Mask
	0x13473FA8, //:Exile Armor
	0x13474390, //:Exile Gauntlets
	0x13474778, //:Exile Leggings
	0x134EDCE0, //:Slave Knight Hood
	0x134EE0C8, //:Slave Knight Armor
	0x134EE4B0, //:Slave Knight Gauntlets
	0x134EE898, //:Slave Knight Leggings
	0x13567E00, //:Pontiff Knight Crown
	0x135681E8, //:Pontiff Knight Armor
	0x135685D0, //:Pontiff Knight Gauntlets
	0x135689B8, //:Pontiff Knight Leggings
	0x135E1F20, //:Ordained Hood
	0x135E2308, //:Ordained Dress
	0x135E2AD8, //:Ordained Trousers
	0x1365C040, //:Golden Crown
	0x1365C428, //:Dragonscale Armor
	0x1365C810, //:Golden Bracelets
	0x1365CBF8, //:Dragonscale Waistcloth
	0x136D6160, //:Wolnir's Crown
	0x13750280, //:Undead Legion Helm
	0x13750668, //:Undead Legion Armor
	0x13750A50, //:Undead Legion Gauntlet
	0x13750E38, //:Undead Legion Leggings
	0x137CA3A0, //:Follower Helm
	0x137CA788, //:Follower Armor
	0x137CAB70, //:Follower Gloves
	0x137CAF58, //:Follower Boots
	0x138BE5E0, //:Man Serpent's Mask
	0x138BE9C8, //:Man Serpent's Robe
	0x13938700, //:Fire Witch Helm
	0x13938AE8, //:Fire Witch Armor
	0x13938ED0, //:Fire Witch Gauntlets
	0x139392B8, //:Fire Witch Leggings
	0x139B2820, //:Millwood Knight Helm
	0x139B2C08, //:Millwood Knight Armor
	0x139B2FF0, //:Millwood Knight Gauntlets
	0x139B33D8, //:Millwood Knight Leggings
	0x13A2C940, //:Lorian's Helm
	0x13A2CD28, //:Lorian's Armor
	0x13A2D110, //:Lorian's Gauntlets
	0x13A2D4F8, //:Lorian's Leggings
	0x13AA6A60, //:Hood of Prayer
	0x13AA6E48, //:Robe of Prayer
	0x13AA7618, //:Skirt of Prayer
	0x13B20B80, //:Giant's crown
	0x13B20F68, //:Giant's Armor
	0x13B21350, //:Giant's Gauntlets
	0x13B21738, //:Giant's Leggings
	0x13C14DC0, //:Dancer's Crown
	0x13C151A8, //:Dancer's Armor
	0x13C15590, //:Dancer's Gauntlets
	0x13C15978, //:Dancer's Leggings
	0x13C8EEE0, //:Ringed Knight Hood
	0x13C8F2C8, //:Ringed Knight Armor
	0x13C8F6B0, //:Ringed Knight Gauntlets
	0x13C8FA98, //:Ringed Knight Leggings
	0x13D09000, //:Gundyr's Helm
	0x13D093E8, //:Gundyr's Armor
	0x13D097D0, //:Gundyr's Gauntlets
	0x13D09BB8, //:Gundyr's Leggings
	0x13D83508, //:Harald Legion Armor
	0x13D838F0, //:Harald Legion Gauntlets
	0x13D83CD8, //:Harald Legion Leggings
	0x13DFD240, //:Old Monarch's Crown
	0x13DFD628, //:Old Monarch's Robe
	0x13EF1480, //:Archdeacon White Crown
	0x13EF1868, //:Archdeacon Holy Garb
	0x13EF2038, //:Archdeacon Skirt
	0x13F6B988, //:Deacon Robe
	0x13F6C158, //:Deacon Skirt
	0x13FE56C0, //:Frigid Valley Mask
	0x1405F7E0, //:Iron Dragonslayer Helm
	0x1405FBC8, //:Iron Dragonslayer Armor
	0x1405FFB0, //:Iron Dragonslayer Gauntlets
	0x14060398, //:Iron Dragonslayer Leggings
	0x140D9900, //:Dingy Hood
	0x140D9CE8, //:Fire Keeper Robe
	0x140DA0D0, //:Fire Keeper Gloves
	0x140DA4B8, //:Fire Keeper Skirt
	0x14153A20, //:White Preacher Head
	0x142C1D80, //:Chain Helm
	0x142C2168, //:Chain Armor
	0x142C2550, //:Leather Gauntlets
	0x142C2938, //:Chain Leggings
	0x143B5FC0, //:Nameless Knight Helm
	0x143B63A8, //:Nameless Knight Armor
	0x143B6790, //:Nameless Knight Gauntlets
	0x143B6B78, //:Nameless Knight Leggings
	0x144AA200, //:Elite Knight Helm
	0x144AA5E8, //:Elite Knight Armor
	0x144AA9D0, //:Elite Knight Gauntlets
	0x144AADB8, //:Elite Knight Leggings
	0x1459E440, //:Faraam Helm
	0x1459E828, //:Faraam Armor
	0x1459EC10, //:Faraam Gauntlets
	0x1459EFF8, //:Faraam Boots
	0x14692680, //:Catarina Helm
	0x14692A68, //:Catarina Armor
	0x14692E50, //:Catarina Gauntlets
	0x14693238, //:Catarina Leggings
	0x1470C7A0, //:Standard Helm
	0x1470CB88, //:Hard Leather Armor
	0x1470CF70, //:Hard Leather Gauntlets
	0x1470D358, //:Hard Leather Boots
	0x147868C0, //:Havel's Helm
	0x14786CA8, //:Havel's Armor
	0x14787090, //:Havel's Gauntlets
	0x14787478, //:Havel's Leggings
	0x148009E0, //:Brigand Hood
	0x14800DC8, //:Brigand Armor
	0x148011B0, //:Brigand Gauntlets
	0x14801598, //:Brigand Trousers
	0x1487AB00, //:Pharis's Hat
	0x1487AEE8, //:Leather Armor
	0x1487B2D0, //:Leather Gloves
	0x1487B6B8, //:Leather Boots
	0x148F4C20, //:Ragged Mask
	0x148F5008, //:Master's Attire
	0x148F53F0, //:Master's Gloves
	0x148F57D8, //:Loincloth
	0x1496ED40, //:Old Sorcerer Hat
	0x1496F128, //:Old Sorcerer Coat
	0x1496F510, //:Old Sorcerer Gauntlets
	0x1496F8F8, //:Old Sorcerer Boots
	0x149E8E60, //:Conjurator Hood
	0x149E9248, //:Conjurator Robe
	0x149E9630, //:Conjurator Manchettes
	0x149E9A18, //:Conjurator Boots
	0x14A62F80, //:Thief Mask
	0x14A63368, //:Black Leather Armor
	0x14A63750, //:Black Leather Gloves
	0x14A63B38, //:Black Leather Boots
	0x14ADD0A0, //:Symbol of Avarice
	0x14B571C0, //:Creighton's Steel Mask
	0x14B575A8, //:Mirrah Chain Mail
	0x14B57990, //:Mirrah Chain Gloves
	0x14B57D78, //:Mirrah Chain Leggings
	0x14BD12E0, //:Maiden Hood
	0x14BD16C8, //:Maiden Robe
	0x14BD1AB0, //:Maiden Gloves
	0x14BD1E98, //:Maiden Skirt
	0x14C4B400, //:Alva Helm
	0x14C4B7E8, //:Alva Armor
	0x14C4BBD0, //:Alva Gauntlets
	0x14C4BFB8, //:Alva Leggings
	0x14CC5520, //:Ruin Helm
	0x14CC5908, //:Ruin Armor
	0x14CC5CF0, //:Ruin Gauntlets
	0x14CC60D8, //:Ruin Leggings
	0x14D3F640, //:Shadow Mask
	0x14D3FA28, //:Shadow Garb
	0x14D3FE10, //:Shadow Gauntlets
	0x14D401F8, //:Shadow Leggings
	0x14DB9760, //:Desert Pyromancer Hood
	0x14DB9B48, //:Desert Pyromancer Garb
	0x14DB9F30, //:Desert Pyromancer Gloves
	0x14DBA318, //:Desert Pyromancer Boots
	0x14E33880, //:Eastern Helm
	0x14E33C68, //:Eastern Armor
	0x14E34050, //:Eastern Gauntlets
	0x14E34438, //:Eastern Leggings
	0x14EAD9A0, //:Black Witch Hat
	0x14EADD88, //:Black Witch Garb
	0x14EAE170, //:Black Witch Wrappings
	0x14EAE558, //:Black Witch Trousers
	0x14F27AC0, //:Helm of Favor
	0x14F27EA8, //:Embraced Armor of Favor
	0x14F28290, //:Gauntlets of Favor
	0x14F28678, //:Leggings of Favor
	0x14FA1BE0, //:Black Witch Veil
	0x1501BD00, //:Brass Helm
	0x1501C0E8, //:Brass Armor
	0x1501C4D0, //:Brass Gauntlets
	0x1501C8B8, //:Brass Leggings
	0x15095E20, //:Blindfold Mask
	0x1510FF40, //:Silver Knight Helm
	0x15110328, //:Silver Knight Armor
	0x15110710, //:Silver Knight Gauntlets
	0x15110AF8, //:Silver Knight Leggings
	0x15204180, //:Lucatiel's Mask
	0x15204568, //:Mirrah Vest
	0x15204950, //:Mirrah Gloves
	0x15204D38, //:Mirrah Trousers
	0x152F83C0, //:Iron Helm
	0x152F87A8, //:Armor of the Sun
	0x152F8B90, //:Iron Bracelets
	0x152F8F78, //:Iron Leggings
	0x153EC600, //:Drakeblood Helm
	0x153EC9E8, //:Drakeblood Armor
	0x153ECDD0, //:Drakeblood Gauntlets
	0x153ED1B8, //:Drakeblood Leggings
	0x154E0C28, //:Drang Armor
	0x154E1010, //:Drang Gauntlets
	0x154E13F8, //:Drang Shoes
	0x155D4A80, //:Black Iron Helm
	0x155D4E68, //:Black Iron Armor
	0x155D5250, //:Black Iron Gauntlets
	0x155D5638, //:Black Iron Leggings
	0x156C8CC0, //:Painting Guardian Hood
	0x156C90A8, //:Painting Guardian Gown
	0x156C9490, //:Painting Guardian Gloves
	0x156C9878, //:Painting Guardian Waistcloth
	0x157BCF00, //:Wolf Knight Helm
	0x157BD2E8, //:Wolf Knight Armor
	0x157BD6D0, //:Wolf Knight Gauntlets
	0x157BDAB8, //:Wolf Knight Leggings
	0x158B1140, //:Dragonslayer Helm
	0x158B1528, //:Dragonslayer Armor
	0x158B1910, //:Dragonslayer Gauntlets
	0x158B1CF8, //:Dragonslayer Leggings
	0x159A5380, //:Smough's Helm
	0x159A5768, //:Smough's Armor
	0x159A5B50, //:Smough's Gauntlets
	0x159A5F38, //:Smough's Leggings
	0x15A995C0, //:Hexer's Hood
	0x15A999A8, //:Hexer's Robes
	0x15A99D90, //:Hexer's Gloves
	0x15A9A178, //:Hexer's Boots
	0x15B8D800, //:Helm of Thorns
	0x15B8DBE8, //:Armor of Thorns
	0x15B8DFD0, //:Gauntlets of Thorns
	0x15B8E3B8, //:Leggings of Thorns
	0x15C81A40, //:Varangian Helm
	0x15C81E28, //:Varangian Armor
	0x15C82210, //:Varangian Cuffs
	0x15C825F8, //:Varangian Leggings
	0x15D75C80, //:Crown of Dusk
	0x15D76068, //:Antiquated Dress
	0x15D76450, //:Antiquated Gloves
	0x15D76838, //:Antiquated Skirt
	0x15E69EC0, //:Karla's Pointed Hat
	0x15E6A2A8, //:Karla's Coat
	0x15E6A690, //:Karla's Gloves
	0x15E6AA78, //:Karla's Trousers
};

DWORD validAccessory[125]
{
	0x20004E20, //:Life Ring
	0x20004E21, //:Life Ring+1
	0x20004E22, //:Life Ring+2
	0x20004E23, //:Life Ring+3
	0x20004E2A, //:Chloranthy Ring
	0x20004E2B, //:Chloranthy Ring+1
	0x20004E2C, //:Chloranthy Ring+2
	0x20004E2D, //:Chloranthy Ring+3
	0x20004E34, //:Havel's Ring
	0x20004E35, //:Havel's Ring+1
	0x20004E36, //:Havel's Ring+2
	0x20004E37, //:Havel's Ring+3
	0x20004E3E, //:Ring of Favor
	0x20004E3F, //:Ring of Favor+1
	0x20004E40, //:Ring of Favor+2
	0x20004E41, //:Ring of Favor+3
	0x20004E48, //:Ring of Steel Protection
	0x20004E49, //:Ring of Steel Protection+1
	0x20004E4A, //:Ring of Steel Protection+2
	0x20004E4B, //:Ring of Steel Protection+3
	0x20004E52, //:Flame Stoneplate Ring
	0x20004E53, //:Flame Stoneplate Ring+1
	0x20004E54, //:Flame Stoneplate Ring+2
	0x20004E5C, //:Thunder Stoneplate Ring
	0x20004E5D, //:Thunder Stoneplate Ring+1
	0x20004E5E, //:Thunder Stoneplate Ring+2
	0x20004E66, //:Magic Stoneplate Ring
	0x20004E67, //:Magic Stoneplate Ring+1
	0x20004E68, //:Magic Stoneplate Ring+2
	0x20004E70, //:Dark Stoneplate Ring
	0x20004E71, //:Dark Stoneplate Ring+1
	0x20004E72, //:Dark Stoneplate Ring+2
	0x20004E7A, //:Speckled Stoneplate Ring
	0x20004E7B, //:Speckled Stoneplate Ring+1
	0x20004E84, //:Bloodbite Ring
	0x20004E85, //:Bloodbite Ring+1
	0x20004E8E, //:Poisonbite Ring
	0x20004E8F, //:Poisonbite Ring+1
	0x20004E98, //:Cursebite Ring
	0x20004EA2, //:Fleshbite Ring
	0x20004EA3, //:Fleshbite Ring+1
	0x20004EAC, //:Wood Grain Ring
	0x20004EAD, //:Wood Grain Ring+1
	0x20004EAE, //:Wood Grain Ring+2
	0x20004EB6, //:Scholar Ring
	0x20004EC0, //:Priestess Ring
	0x20004ECA, //:Red Tearstone Ring
	0x20004ED4, //:Blue Tearstone Ring
	0x20004EDE, //:Wolf Ring
	0x20004EDF, //:Wolf Ring+1
	0x20004EE0, //:Wolf Ring+2
	0x20004EE1, //:Wolf Ring+3
	0x20004EE8, //:Leo Ring
	0x20004EF2, //:Ring of Sacrifice
	0x20004F06, //:Young Dragon Ring
	0x20004F07, //:Bellowing Dragoncrest Ring
	0x20004F10, //:Great Swamp Ring
	0x20004F11, //:Witch's Ring
	0x20004F1A, //:Morne's Ring
	0x20004F1B, //:Ring of the Sun's First Born
	0x20004F2E, //:Lingering Dragoncrest Ring
	0x20004F2F, //:Lingering Dragoncrest Ring+1
	0x20004F30, //:Lingering Dragoncrest Ring+2
	0x20004F38, //:Sage Ring
	0x20004F39, //:Sage Ring+1
	0x20004F3A, //:Sage Ring+2
	0x20004F42, //:Slumbering Dragoncrest Ring
	0x20004F4C, //:Dusk Crown Ring
	0x20004F56, //:Saint's Ring
	0x20004F60, //:Deep Ring
	0x20004F6A, //:Darkmoon Ring
	0x20004F92, //:Hawk Ring
	0x20004F9C, //:Hornet Ring
	0x20004FA6, //:Covetous Gold Serpent Ring
	0x20004FA7, //:Covetous Gold Serpent Ring+1
	0x20004FA8, //:Covetous Gold Serpent Ring+2
	0x20004FA9, //:Covetous Gold Serpent Ring+3
	0x20004FB0, //:Covetous Silver Serpent Ring
	0x20004FB1, //:Covetous Silver Serpent Ring+1
	0x20004FB2, //:Covetous Silver Serpent Ring+2
	0x20004FB3, //:Covetous Silver Serpent Ring+3
	0x20004FBA, //:Sun Princess Ring
	0x20004FC4, //:Silvercat Ring
	0x20004FCE, //:Skull Ring
	0x20004FD8, //:Untrue White Ring
	0x20004FE2, //:Carthus Milkring
	0x20004FEC, //:Knight's Ring
	0x20004FF6, //:Hunter's Ring
	0x20005000, //:Knight Slayer's Ring
	0x2000500A, //:Magic Clutch Ring
	0x20005014, //:Lightning Clutch Ring
	0x2000501E, //:Fire Clutch Ring
	0x20005028, //:Dark Clutch Ring
	0x2000503C, //:Flynn's Ring
	0x20005046, //:Prisoner's Chain
	0x20005050, //:Untrue Dark Ring
	0x20005064, //:Obscuring Ring
	0x2000506E, //:Ring of the Evil Eye
	0x2000506F, //:Ring of the Evil Eye+1
	0x20005070, //:Ring of the Evil Eye+2
	0x20005071, //:Ring of the Evil Eye+3
	0x20005078, //:Calamity Ring
	0x20005082, //:Farron Ring
	0x2000508C, //:Aldrich's Ruby
	0x20005096, //:Aldrich's Sapphire
	0x200050B4, //:Lloyd's Sword Ring
	0x200050BE, //:Lloyd's Shield Ring
	0x200050DC, //:Estus Ring
	0x200050E6, //:Ashen Estus Ring
	0x200050F0, //:Horsehoof Ring
	0x200050FA, //:Carthus Bloodring
	0x20005104, //:Reversal Ring
	0x2000510E, //:Pontiff's Right Eye
	0x20005136, //:Pontiff's Left Eye
	0x2000515E, //:Dragonscale Ring
	0x20005208, //:Chillbite Ring
	0x2000274C, //WOB Covenant
	0x20002738, //WOS Covenant
	0x20002710, //DMB Covenant
	0x20002724, //WOF Covenant
	0x2000272E, //AF Covenant
	0x20002742, //MM Covenant
	0x20002756, //BS Covenant
	0x20002760, //RF Covenant
	0x2000276A, //SOTC Covenant
};

DWORD validGoods[400] =
{
	0x40000064, //:White Sign Soapstone
	0x40000065, //:Red Sign Soapstone
	0x40000066, //:Red Eye Orb
	0x40000067, //:Black Separation Crystal
	0x4000006C, //:Roster of Knights
	0x4000006F, //:Cracked Red Eye Orb
	0x40000073, //:Black Eye Orb
	0x40000075, //:Darksign
	0x40000077, //:Way of White Circlet
	0x40000096, //:Estus Flask
	0x40000097, //:Estus Flask
	0x40000098, //:Estus Flask+1
	0x40000099, //:Estus Flask+1
	0x4000009A, //:Estus Flask+2
	0x4000009B, //:Estus Flask+2
	0x4000009C, //:Estus Flask+3
	0x4000009D, //:Estus Flask+3
	0x4000009E, //:Estus Flask+4
	0x4000009F, //:Estus Flask+4
	0x400000A0, //:Estus Flask+5
	0x400000A1, //:Estus Flask+5
	0x400000A2, //:Estus Flask+6
	0x400000A3, //:Estus Flask+6
	0x400000A4, //:Estus Flask+7
	0x400000A5, //:Estus Flask+7
	0x400000A6, //:Estus Flask+8
	0x400000A7, //:Estus Flask+8
	0x400000A8, //:Estus Flask+9
	0x400000A9, //:Estus Flask+9
	0x400000AA, //:Estus Flask+10
	0x400000AB, //:Estus Flask+10
	0x400000BE, //:Ashen Estus Flask
	0x400000BF, //:Ashen Estus Flask
	0x400000C0, //:Ashen Estus Flask+1
	0x400000C1, //:Ashen Estus Flask+1
	0x400000C2, //:Ashen Estus Flask+2
	0x400000C3, //:Ashen Estus Flask+2
	0x400000C4, //:Ashen Estus Flask+3
	0x400000C5, //:Ashen Estus Flask+3
	0x400000C6, //:Ashen Estus Flask+4
	0x400000C7, //:Ashen Estus Flask+4
	0x400000C8, //:Ashen Estus Flask+5
	0x400000C9, //:Ashen Estus Flask+5
	0x400000CA, //:Ashen Estus Flask+6
	0x400000CB, //:Ashen Estus Flask+6
	0x400000CC, //:Ashen Estus Flask+7
	0x400000CD, //:Ashen Estus Flask+7
	0x400000CE, //:Ashen Estus Flask+8
	0x400000CF, //:Ashen Estus Flask+8
	0x400000D0, //:Ashen Estus Flask+9
	0x400000D1, //:Ashen Estus Flask+9
	0x400000D2, //:Ashen Estus Flask+10
	0x400000D3, //:Ashen Estus Flask+10
	0x400000F0, //:Divine Blessing
	0x400000F1, //:Hidden Blessing
	0x400000F2, //:Silver Pendant
	0x40000104, //:Green Blossom
	0x40000105, //:Budding Green Blossom
	0x40000106, //:Budding Green Blossom
	0x4000010E, //:Bloodred Moss Clump
	0x4000010F, //:Purple Moss Clump
	0x40000110, //:Blooming Purple Moss Clump
	0x40000112, //:Purging Stone
	0x40000114, //:Rime-blue Moss Clump
	0x40000115, //:Monastery Charm
	0x40000118, //:Repair Powder
	0x40000122, //:Kukri
	0x40000124, //:Firebomb
	0x40000125, //:Dung Pie
	0x40000126, //:Alluring Skull
	0x40000128, //:Undead Hunter Charm
	0x40000129, //:Black Firebomb
	0x4000012B, //:Rope Firebomb
	0x4000012C, //:Lightning Urn
	0x4000012D, //:Holy Water Urn
	0x4000012E, //:Rope Black Firebomb
	0x4000012F, //:Stalk Dung Pie
	0x40000130, //:Duel Charm
	0x40000136, //:Throwing Knife
	0x40000137, //:Poison Throwing Knife
	0x4000013B, //:Church Guardian Shiv
	0x4000014A, //:Charcoal Pine Resin
	0x4000014B, //:Gold Pine Resin
	0x4000014E, //:Human Pine Resin
	0x4000014F, //:Carthus Rouge
	0x40000150, //:Pale Pine Resin
	0x40000154, //:Charcoal Pine Bundle
	0x40000155, //:Gold Pine Bundle
	0x40000157, //:Rotten Pine Resin
	0x4000015E, //:Homeward Bone
	0x4000015F, //:Coiled Sword Fragment
	0x4000016E, //:Wolf's Blood Swordgrass
	0x4000016F, //:Human Dregs
	0x40000170, //:Forked Pale Tongue
	0x40000171, //:Proof of a Concord Well Kept
	0x40000172, //:Prism Stone
	0x40000173, //:Binoculars
	0x40000174, //:Proof of a Concord Kept
	0x40000175, //:Pale Tongue
	0x40000176, //:Vertebra Shackle
	0x40000177, //:Sunlight Medal
	0x40000178, //:Pendant
	0x40000179, //:Dragon Head Stone
	0x4000017A, //:Dragon Torso Stone
	0x4000017B, //:Filianore's Spear Ornament
	0x4000017C, //:Rubbish
	0x40000181, //:Dried Finger
	0x40000183, //:Twinkling Dragon Head Stone
	0x40000184, //:Twinkling Dragon Torso Stone
	0x40000186, //:Fire Keeper Soul
	0x40000190, //:Fading Soul
	0x40000191, //:Soul of a Deserted Corpse
	0x40000192, //:Large Soul of a Deserted Corpse
	0x40000193, //:Soul of an Unknown Traveler
	0x40000194, //:Large Soul of an Unknown Traveler
	0x40000195, //:Soul of a Nameless Soldier
	0x40000196, //:Large Soul of a Nameless Soldier
	0x40000197, //:Soul of a Weary Warrior
	0x40000198, //:Large Soul of a Weary Warrior
	0x40000199, //:Soul of a Crestfallen Knight
	0x4000019A, //:Large Soul of a Crestfallen Knight
	0x4000019B, //:Soul of a Proud Paladin
	0x4000019C, //:Large Soul of a Proud Paladin
	0x4000019D, //:Soul of an Intrepid Hero
	0x4000019E, //:Large Soul of an Intrepid Hero
	0x4000019F, //:Soul of a Seasoned Warrior
	0x400001A0, //:Large Soul of a Seasoned Warrior
	0x400001A1, //:Soul of an Old Hand
	0x400001A2, //:Soul of a Venerable Old Hand
	0x400001A3, //:Soul of a Champion
	0x400001A4, //:Soul of a Great Champion
	0x400001B8, //:Seed of a Giant Tree
	0x400001B9, //:Spirit Amethyst
	0x400001BA, //:Spirit Amethyst
	0x400001C2, //:Oozing Charm Berry
	0x400001C3, //:Oozing Flash Berry
	0x400001C4, //:Mossfruit
	0x400001C5, //:Brightbug
	0x400001C6, //:Young White Branch
	0x400001C7, //:Rusted Coin
	0x400001C8, //:Siegbrau
	0x400001C9, //:Rusted Gold Coin
	0x400001CA, //:Blue Bug Pellet
	0x400001CB, //:Red Bug Pellet
	0x400001CC, //:Yellow Bug Pellet
	0x400001CD, //:Black Bug Pellet
	0x400001CE, //:Young White Branch
	0x400001CF, //:Young White Branch
	0x400001EA, //:Dark Sigil
	0x400001F4, //:Ember
	0x400001F5, //:Ember
	0x400001F6, //:Ember
	0x400001F7, //:Ember
	0x400001F8, //:Ember
	0x400001F9, //:Ember
	0x400001FA, //:Ember
	0x400001FB, //:Ember
	0x400001FC, //:Ember
	0x400001FD, //:Ember
	0x400001FE, //:Ember
	0x40000208, //:Hello Carving
	0x40000209, //:Thank you Carving
	0x4000020A, //:Very good! Carving
	0x4000020B, //:I'm sorry Carving
	0x4000020C, //:Help me! Carving
	0x4000028A, //:Ritual Spear Fragment
	0x4000028B, //:Divine Spear Fragment
	0x400002C8, //:Soul of Champion Gundyr
	0x400002C9, //:Soul of a Wicked Spirit
	0x400002CA, //:Soul of the Dancer
	0x400002CB, //:Soul of a Crystal Sage
	0x400002CD, //:Soul of the Blood of the Wolf
	0x400002CE, //:Soul of Consumed Oceiros
	0x400002CF, //:Soul of Boreal Valley Vordt
	0x400002D0, //:Soul of the Old Demon King
	0x400002D1, //:Soul of Dragonslayer Armour
	0x400002D2, //:Soul of the Nameless King
	0x400002D3, //:Soul of the Great Bat
	0x400002D4, //:Soul of Pontiff Sulyvahn
	0x400002D5, //:Soul of Aldrich
	0x400002D6, //:Soul of High Lord Wolnir
	0x400002D7, //:Soul of the Rotted Greatwood
	0x400002D8, //:Soul of Rosaria
	0x400002D9, //:Soul of the Deacons of the Deep
	0x400002DB, //:Soul of the Twin Princes
	0x400002DC, //:Soul of Yhorm the Giant
	0x400002DD, //:Soul of the Lords
	0x400002E3, //:Soul of a Demon
	0x400002E6, //:Soul of the Twin Princes
	0x400002E7, //:Soul of a Stray Demon
	0x400002E8, //:Soul of Sister Friede
	0x400002E9, //:Soul of Slave Knight Gael
	0x400002EA, //:Soul of the Demon Prince
	0x400002EB, //:Soul of Darkeater Midir
	0x400003E8, //:Titanite Shard
	0x400003E9, //:Large Titanite Shard
	0x400003EA, //:Titanite Chunk
	0x400003EB, //:Titanite Slab
	0x400003F2, //:Dragon Scale
	0x400003FC, //:Titanite Scale
	0x40000406, //:Twinkling Titanite
	0x4000044C, //:Heavy Gem
	0x40000456, //:Sharp Gem
	0x40000460, //:Refined Gem
	0x4000046A, //:Crystal Gem
	0x40000474, //:Simple Gem
	0x4000047E, //:Fire Gem
	0x40000488, //:Chaos Gem
	0x40000492, //:Lightning Gem
	0x4000049C, //:Deep Gem
	0x400004A6, //:Dark Gem
	0x400004B0, //:Poison Gem
	0x400004BA, //:Blood Gem
	0x400004C4, //:Raw Gem
	0x400004CE, //:Blessed Gem
	0x400004D8, //:Hollow Gem
	0x400004E2, //:Shriving Stone
	0x400007D1, //:Lift Chamber Key
	0x400007D3, //:Bridge Key
	0x400007D4, //:Iron Seal of the Wolf
	0x400007D5, //:Small Doll
	0x400007D7, //:Jailbreaker's Key
	0x400007D8, //:Jailer's Key Ring
	0x400007D9, //:Grave Key
	0x400007DA, //:Cell Key
	0x400007DB, //:Dungeon Ground Floor Key
	0x400007DC, //:Old Cell Key
	0x400007DD, //:Tower Key
	0x400007DE, //:Grand Archives Key
	0x400007DF, //:Tower Key
	0x40000835, //:Holy Remains
	0x40000836, //:Small Lothric Banner
	0x40000837, //:Farron Coal
	0x40000838, //:Sage's Coal
	0x40000839, //:Giant's Coal
	0x4000083A, //:Profaned Coal
	0x4000083B, //:Mortician's Ashes
	0x4000083C, //:Dreamchaser's Ashes
	0x4000083D, //:Paladin's Ashes
	0x4000083E, //:Grave Warden's Ashes
	0x4000083F, //:Greirat's Ashes
	0x40000840, //:Orbeck's Ashes
	0x40000841, //:Cornyx's Ashes
	0x40000842, //:Karla's Ashes
	0x40000843, //:Irina's Ashes
	0x40000844, //:Yuria's Ashes
	0x40000845, //:Basin of Vows
	0x40000846, //:Loretta's Bone
	0x40000847, //:Braille Divine Tome of Carim
	0x40000848, //:Braille Divine Tome of Lothric
	0x40000849, //:Braille Divine Sunlight Tome
	0x4000084B, //:Cinders of a Lord
	0x4000084C, //:Cinders of a Lord
	0x4000084D, //:Cinders of a Lord
	0x4000084E, //:Cinders of a Lord
	0x4000084F, //:Great Swamp Pyromancy Tome
	0x40000850, //:Carthus Pyromancy Tome
	0x40000851, //:Izalith Pyromancy Tome
	0x40000852, //:Quelana Pyromancy Tome
	0x40000853, //:Grave Warden Pyromancy Tome
	0x40000854, //:Sage's Scroll
	0x40000855, //:Logan's Scroll
	0x40000856, //:Crystal Scroll
	0x40000857, //:Transposing Kiln
	0x40000858, //:Gwyndolin's Finger
	0x40000859, //:Coiled Sword
	0x4000085A, //:Eyes of a Fire Keeper
	0x4000085B, //:Sword of Avowal
	0x4000085C, //:Golden Scroll
	0x4000085D, //:Estus Shard
	0x4000085E, //:Hawkwood's Swordgrass
	0x4000085F, //:Undead Bone Shard
	0x40000860, //:Deep Braille Divine Tome
	0x40000861, //:Londor Braille Divine Tome
	0x40000862, //:Excrement-covered Ashes
	0x40000863, //:Prisoner Chief's Ashes
	0x40000864, //:Xanthous Ashes
	0x40000865, //:Hollow's Ashes
	0x40000866, //:Patches' Ashes
	0x40000867, //:Dragon Chaser's Ashes
	0x40000868, //:Easterner's Ashes
	0x40000869, //:Champions Bones
	0x4000086A, //:Captain's Ashes
	0x4000086B, //:Contraption Key
	0x4000086C, //:Small Envoy Banner
	0x4000086D, //:Old Woman's Ashes
	0x4000086E, //:Blood of the Dark Soul
	0x4000086F, //:Young Grass Dew
	0x40124F80, //:Farron Dart
	0x40127690, //:Great Farron Dart
	0x4013D620, //:Soul Arrow
	0x4013DA08, //:Great Soul Arrow
	0x4013DDF0, //:Heavy Soul Arrow
	0x4013E1D8, //:Great Heavy Soul Arrow
	0x4013E5C0, //:Homing Soulmass
	0x4013E9A8, //:Homing Crystal Soulmass
	0x4013ED90, //:Soul Spear
	0x4013F178, //:Crystal Soul Spear
	0x4013F560, //:Deep Soul
	0x4013F948, //:Great Deep Soul
	0x4013FD30, //:Magic Weapon
	0x40140118, //:Great Magic Weapon
	0x40140500, //:Crystal Magic Weapon
	0x401408E8, //:Frozen Weapon
	0x40144B50, //:Magic Shield
	0x40144F38, //:Great Magic Shield
	0x40147260, //:Hidden Weapon
	0x40147648, //:Hidden Body
	0x40149970, //:Cast Light
	0x4014A528, //:Repair
	0x4014A910, //:Spook
	0x4014ACF8, //:Chameleon
	0x4014B0E0, //:Aural Decoy
	0x4014E790, //:White Dragon Breath
	0x4014EF60, //:Farron Hail
	0x4014F348, //:Crystal Hail
	0x4014F730, //:Soul Greatsword
	0x4014FB18, //:Farron Flashsword
	0x4014FF00, //:Old Moonlight
	0x401875B8, //:Affinity
	0x401879A0, //:Great Soul Dregs
	0x40189CC8, //:Dark Edge
	0x4018B820, //:Soul Stream
	0x40193138, //:Twisted Wall of Light
	0x401A8CE0, //:Pestilent Mercury
	0x401A90C8, //:Snap Freeze
	0x40249F00, //:Fireball
	0x4024A6D0, //:Fire Orb
	0x4024AAB8, //:Firestorm
	0x4024B288, //:Fire Surge
	0x4024B670, //:Fire Whip
	0x4024BA58, //:Black Serpent
	0x4024C610, //:Combustion
	0x4024C9F8, //:Great Combustion
	0x4024ED20, //:Poison Mist
	0x4024F108, //:Toxic Mist
	0x4024F4F0, //:Acid Surge
	0x40251430, //:Iron Flesh
	0x40251818, //:Flash Sweat
	0x402527B8, //:Carthus Flame Arc
	0x40252BA0, //:Rapport
	0x40253B40, //:Power Within
	0x40256250, //:Great Chaos Fire Orb
	0x40256638, //:Chaos Storm
	0x40256A20, //:Fire Whip
	0x40256E08, //:Black Flame
	0x402575D8, //:Profaned Flame
	0x402579C0, //:Chaos Bed Vestiges
	0x40258190, //:Flame Fan
	0x4025B070, //:Warmth
	0x40257DA8, //:Floating Chaos
	0x402717D0, //:Profuse Sweat
	0x4027AC40, //:Dark Orb
	0x4027D350, //:Black Fire Orb
	0x4027FA60, //:Bursting Fireball
	0x40282170, //:Boulder Heave
	0x40284880, //:Sacred Flame
	0x40286F90, //:Carthus Beacon
	0x402896A0, //:Seething Chaos
	0x403540D0, //:Heal Aid
	0x403567E0, //:Heal
	0x40356BC8, //:Med Heal
	0x40356FB0, //:Great Heal
	0x40357398, //:Soothing Sunlight
	0x40357780, //:Replenishment
	0x40357B68, //:Bountiful Sunlight
	0x40358338, //:Bountiful Light
	0x40358720, //:Caressing Tears
	0x40358B08, //:Lightning Arrow
	0x40359AA8, //:Morbid Temptation
	0x4035B600, //:Tears of Denial
	0x4035B9E8, //:Homeward
	0x4035DD10, //:Force
	0x4035E0F8, //:Wrath of the Gods
	0x4035E4E0, //:Emit Force
	0x40360420, //:Seek Guidance
	0x40362B30, //:Lightning Spear
	0x40362F18, //:Great Lightning Spear
	0x40363300, //:Sunlight Spear
	0x403636E8, //:Lightning Storm
	0x40363AD0, //:Gnaw
	0x40363EB8, //:Dorhys' Gnawing
	0x403642A0, //:Way of White Corona
	0x40364688, //:Projected Heal
	0x40365240, //:Magic Barrier
	0x40365628, //:Great Magic Barrier
	0x40365DF8, //:Sacred Oath
	0x4036A448, //:Vow of Silence
	0x4036C770, //:Lightning Blade
	0x4036CB58, //:Darkmoon Blade
	0x40378AC0, //:Dark Blade
	0x40387520, //:Dead Again
	0x40389C30, //:Lightning Stake
	0x4038C340, //:Divine Pillars of Light
	0x4038EA50, //:Lifehunt Scythe
	0x40393870, //:Dorris Swarm
	0x40395F80, //:Blessed Weapon
	0x40398690, //:Deep Protection
	0x4039ADA0, //:Atonement
	0x4000005E, //Not Sure What This Is, But It Spawns In Inventory
};

bool onlyOneItems[18] =
{
	false, //Estus Flask
	false, //Ashen Estus Flask
	false, //Black Crystal
	false, //Dark Sign
	false, //WOB Covenant
	false, //WOS Covenant
	false, //DMB Covenant
	false, //WOF Covenant
	false, //AF Covenant
	false, //MM Covenant
	false, //BS Covenant
	false, //RF Covenant
	false, //SOTC Covenant
	false, //White Sign Soapstone
	false, //Red Sign Soapstone
	false, //Red Eye Orb
	false, //Roster of Knights
	false, //Black Eye Orb
};