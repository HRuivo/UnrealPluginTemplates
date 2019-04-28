# UnrealPluginTemplates
## Advanced Asset Type with File Import Feature

### Summary
A new asset in the content browser is created with a drag-n-drop functionaly.

### Configure
#### Asset Color
_MyTextAssetActions.cpp_

![asset type color](https://github.com/HRuivo/UnrealPluginTemplates/blob/CustomAssetTypeAdv/Docs/images/asset_type_color.JPG)
```c++
FColor FMyTextAssetActions::GetTypeColor() const
{
	return FColor::Red;
}
```


#### Asset Category
_MyTextAssetActions.cpp_

![asset type category](https://github.com/HRuivo/UnrealPluginTemplates/blob/CustomAssetTypeAdv/Docs/images/asset_type_category.JPG)
```c++
uint32 FMyTextAssetActions::GetCategories()
{
	return EAssetTypeCategories::Gameplay;
}
```
