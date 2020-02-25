.PHONY: clean All

All:
	@echo "----------Building project:[ vector_operations - Debug ]----------"
	@cd "vector_operations" && "$(MAKE)" -f  "vector_operations.mk"
clean:
	@echo "----------Cleaning project:[ vector_operations - Debug ]----------"
	@cd "vector_operations" && "$(MAKE)" -f  "vector_operations.mk" clean
