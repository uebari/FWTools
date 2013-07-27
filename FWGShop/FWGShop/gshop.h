#pragma once

public ref struct Category
{
	array<unsigned char>^ name;
	int sub_cats_count;
	array<array<unsigned char>^>^ sub_cats;
};

public ref struct SaleOption
{
	unsigned int price;
	unsigned int expire_date;
	unsigned int duration;
	unsigned int start_date;
	int control_type;
	unsigned int day;
	unsigned int status;
	unsigned int flags;
};

public ref struct Hex
{
	int hex1;
	int hex2;
	int hex3;
	int hex4;
};

public ref struct Item
{
	bool activate;

    int shop_id;
    int cat_index;
    int sub_cat_index;

    array<unsigned char>^ surface_path;

    int item_id;
    int item_amount;

	array<SaleOption^>^ sale_options;

    array<unsigned char>^ description;
    array<unsigned char>^ name;

	int gift_id;
	int gift_amount;
	int gift_duration;
	int log_price;

	int price;
};

public ref struct Boutique
{
    int timestamp;
    int item_count;
    array<Item^>^ items;
    array<Category^>^ categories; // [8]
	array<Hex^>^ hex;
};