#include "includes/light_json_reader.hpp"
#include "includes/light_json_writer.hpp"

int main() {
	LightJson::JsonWriter testJsonWriter("test.json");

	//testJsonWriter.setLogger();
	testJsonWriter.Create("test.json");
	testJsonWriter.Open("test.json");
	testJsonWriter.Close("test.json");
	testJsonWriter.Delete("test.json");

	testJsonWriter.Create("ez.json");
	testJsonWriter.Open();
	testJsonWriter.Close();
	testJsonWriter.Delete();

	LightJson::JsonReader jsonReader;

}